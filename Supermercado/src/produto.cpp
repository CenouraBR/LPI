#include "../include/produto.hpp"

Produto::Produto() {
}

Produto::Produto(string nome, int quantidadeEstoque) {
  this->nome = nome;
  this->quantidadeEstoque = quantidadeEstoque;
}

Produto::Produto(size_t codigo, string nome, string unidadeMedida, float preco, int quantidadeEstoque) {
  this->codigo = codigo;
  this->nome = nome;
  this->unidadeMedida = unidadeMedida;
  this->preco = preco;
  this->quantidadeEstoque = quantidadeEstoque;
  this->quantidadeVendida = 0;
}