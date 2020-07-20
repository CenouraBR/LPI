#include "../include/cliente.hpp"

#include <fstream>
#include <iomanip>
#include <iostream>

#include "../include/produto.hpp"

int Cliente::numCliente;

Cliente::Cliente() {
  this->numCliente++;
  this->saldo = 0;
}

void Cliente::compra(std::string nome, Estabelecimento estabelecimento) {
  Produto produto_comprado(0, "Vazio", "Vazio", 0, 0);
  std::string nomeUpper = nome;

  for (int i = 0; i < nomeUpper.length(); i++) {
    nomeUpper[i] = toupper(nomeUpper[i]);
  }

  std::string produtosNomeUpper;
  for (auto i = estabelecimento.produtos.begin(); i != estabelecimento.produtos.end(); i++) {
    produtosNomeUpper = i->nome;

    for (int i = 0; i < produtosNomeUpper.length(); i++) {
      produtosNomeUpper[i] = toupper(produtosNomeUpper[i]);
    }

    if (nomeUpper == produtosNomeUpper) {
      produto_comprado = estabelecimento.venda(i->codigo, saldo);
      break;
    }
  }

  if (produto_comprado.nome == "Vazio") {
    std::cout << "Erro na compra! " << std::endl;
    return;
  }
  saldo -= produto_comprado.preco;

  for (int i = 0; i < sacola.size(); i++) {
    if (sacola.operador(i)->nome == produto_comprado.nome) {
      sacola.operador(i)->quantidadeVendida++;
      registro();
      return;
    }
  }
  this->sacola.push_back(produto_comprado);
  sacola.operador(sacola.size() - 1)->quantidadeVendida++;
  registro();
  return;
}

void Cliente::verSacola() {
  std::cout << "PRODUTO,QUANTIDADE" << std::endl;

  for (int i = 0; i < sacola.size(); i++) {
    std::cout << this->sacola.operador(i)->nome << "," << this->sacola.operador(i)->quantidadeVendida << std::endl;
  }
  return;
}

void Cliente::registro() {
  std::ofstream write_file("sacolas/cliente_" + std::to_string(this->numCliente) + ".txt");

  write_file << "PRODUTO,QUANTIDADE" << std::endl;
  char aspa = '"';

  for (int i = 0; i < sacola.size(); i++) {
    write_file << this->sacola.operador(i)->nome << "," << this->sacola.operador(i)->quantidadeVendida << std::endl;
  }
  return;
}