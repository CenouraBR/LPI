#ifndef WSN_ESTABELECIMENTO_H
#define WSN_ESTABELECIMENTO_H

#include <fstream>
#include <string>

#include "produto.hpp"
#include "vector_supermercado.hpp"
using namespace std;

class Estabelecimento {
 public:
  std::string listaDeProdutos;
  Estabelecimento(string listaDePordutos);
  static Vector_supermercado<Produto> produtos;
  static Vector_supermercado<Produto> caixa;
  static float valor_total;

  void atualizarEstoque();
  void atualizarCaixa(Produto p);
  void listar();
  Produto venda(size_t codigo, float saldo);
  void Caixa();
  void reabastecer(string nome, int quantidade);
};

#endif