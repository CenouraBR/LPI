#include "../include/fornecedor.hpp"

#include <fstream>
#include <iomanip>

#include "../include/estabelecimento.hpp"

Fornecedor::Fornecedor(string ListaFornecedor) {
  string Lista_Fornecedor = ListaFornecedor;
  ifstream read_file(Lista_Fornecedor);

  if (read_file.fail()) {
    std::cout << "Arquivo de estoque não encontrado" << std::endl;
    return;
  }

  string line;
  getline(read_file, line);

  string nome;
  int quantidadeEstoque;

  while (!read_file.eof()) {
    //Nome
    getline(read_file, line, ',');
    nome = line;

    //Estoque
    getline(read_file, line);

    if (line.size() > 0) {
      quantidadeEstoque = stoi(line);
    }

    Produto p(nome, quantidadeEstoque);
    produtos_fornecedor.push_back(p);
  }
}

void Fornecedor::listar_produtos() {
  std::cout << "PRODUTO,QUANTIDADE" << std::endl;

  for (auto i = produtos_fornecedor.begin(); i != produtos_fornecedor.end(); i++) {
    std::cout << i->nome << "," << i->quantidadeEstoque << std::endl;
  }

  return;
}

void Fornecedor::atualizarEstoque() {
  std::ofstream write_file("fornecedor.csv");

  write_file << "PRODUTO,QUANTIDADE" << std::endl;

  int j = 0;

  for (auto i = produtos_fornecedor.begin(); i != produtos_fornecedor.end(); i++) {
    j++;
    write_file << i->nome << "," << i->quantidadeEstoque;

    if (j != produtos_fornecedor.size()) {
      write_file << std::endl;
    }
  }
  return;
}

int Fornecedor::repassar_produtos(string nome, int quantidade, Fornecedor fornecedor) {
  Produto produto_comprado("Vazio", 0);
  bool verificador = false;
  int x = 0;

  std::string nomeUpper = nome;

  for (int i = 0; i < nomeUpper.length(); i++) {
    nomeUpper[i] = toupper(nomeUpper[i]);
  }

  std::string produtosNomeUpper;

  for (auto i = fornecedor.produtos_fornecedor.begin(); i != fornecedor.produtos_fornecedor.end(); i++) {
    produtosNomeUpper = i->nome;

    for (int i = 0; i < produtosNomeUpper.length(); i++) {
      produtosNomeUpper[i] = toupper(produtosNomeUpper[i]);
    }

    if (nomeUpper == produtosNomeUpper) {
      if (i->quantidadeEstoque >= quantidade && i->quantidadeEstoque > 0) {
        i->quantidadeEstoque -= quantidade;
        std::cout << "Pedido realizado com sucesso!" << std::endl;
        verificador = true;
        x = 1;
        atualizarEstoque();
      }
      break;
    }
  }
  if (!verificador) {
    std::cout << "Erro no pedido! " << std::endl;
  }
  return x;
}
