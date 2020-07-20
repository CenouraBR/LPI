#ifndef W5N_CLIENTE_H
#define WSN_CLIENTE_H

#include <string>

#include "estabelecimento.hpp"
#include "produto.hpp"
#include "vector_supermercado.hpp"

using namespace std;

class Cliente {
 public:
  Cliente();
  static int numCliente;
  float saldo;
  Vector_supermercado<Produto> sacola;

  void compra(string nome, Estabelecimento estabelecimento);
  void verSacola();
  void registro();
};

#endif