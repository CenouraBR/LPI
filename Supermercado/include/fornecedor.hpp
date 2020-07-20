#ifndef WSN_FORNECEDOR_HPP
#define WSN_FORNECEDOR_HPP

#include <string>

#include "produto.hpp"
#include "vector_supermercado.hpp"

class Fornecedor {
 public:
  Vector_supermercado<Produto> produtos_fornecedor;
  Fornecedor(string listaFornecedor);
  void listar_produtos();
  int repassar_produtos(string nome, int quantidade, Fornecedor fornecedor);
  void atualizarEstoque();
};

#endif