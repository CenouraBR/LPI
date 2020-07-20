#include <iostream>
#include <string>

#include "../include/cliente.hpp"
#include "../include/estabelecimento.hpp"
#include "../include/fornecedor.hpp"
#include "../include/produto.hpp"
#include "../include/vector_supermercado.hpp"

int main() {
  Estabelecimento loja("estoque.csv");
  Fornecedor loja_fornecedor("fornecedor.csv");

  std::string opcao = "-1";
  int i = 0;

  Vector_supermercado<Cliente> c;
  Cliente cliente;
  c.push_back(cliente);

  while (opcao != "0") {
    std::cout << "\nDigite o número correspondente ao comando: " << std::endl;
    std::cout << "1 - Adicionar saldo do cliente " << std::endl;
    std::cout << "2 - Listar os produtos da loja " << std::endl;
    std::cout << "3 - Ver conteúdo da sacola do cliente " << std::endl;
    std::cout << "4 - Realizar compra " << std::endl;
    std::cout << "5 - Ver tudo que foi vendido e o total ganho " << std::endl;
    std::cout << "6 - Listar os produtos do fornecedor " << std::endl;
    std::cout << "7 - Reabastecer produto na loja " << std::endl;
    std::cout << "0 - Sair " << std::endl;

    std::cin >> opcao;

    if (opcao == "1") {
      std::string line;
      std::cout << "\nDigite o valor que será acrescentado: " << std::endl;
      std::cin.ignore();
      getline(std::cin, line);
      c.operador(i)->saldo += stof(line);
      std::cout << "Crédito Adcionado! Saldo atual: " << c.operador(i)->saldo << std::endl;
    } else if (opcao == "2") {
      loja.listar();
    } else if (opcao == "3") {
      c.operador(i)->verSacola();
    } else if (opcao == "4") {
      std::cout << "\nDigite o nome do produto: " << std::endl;
      std::string nome;
      std::cin >> nome;
      c.operador(i)->compra(nome, loja);
    } else if (opcao == "5") {
      loja.Caixa();
    } else if (opcao == "6") {
      loja_fornecedor.listar_produtos();
    } else if (opcao == "7") {
      int x;
      std::string nome;
      int quantidade;
      std::cout << "\nDigite o nome do produto: " << std::endl;
      std::cin >> nome;
      std::cout << "\nDigite a quantidade desejada: " << std::endl;
      std::cin >> quantidade;
      x = loja_fornecedor.repassar_produtos(nome, quantidade, loja_fornecedor);
      if (x) {
        loja.reabastecer(nome, quantidade);
      }
    } else if (opcao == "0") {
      std::cout << "\nDeseja inicializar um novo cliente (1- Sim / 2- Não): " << std::endl;
      std::cin >> opcao;
      if (opcao == "1") {
        opcao == "-1";
        i++;
        Cliente cliente;
        c.push_back(cliente);
      } else if (opcao == "2") {
        std::cout << "\nPrograma finalizado! " << std::endl;
        return 0;
      }
    } else {
      std::cout << "\nOpção inválida! " << std::endl;
    };
  }

  return 0;
}