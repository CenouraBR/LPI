#ifndef WSN_PRODUTO_H
#define WSN_PRODUTO_H

#include <string>
using namespace std;

class Produto {
 public:
  size_t codigo;
  string nome;
  string unidadeMedida;
  float preco;
  int quantidadeEstoque;
  int quantidadeVendida;
  Produto();
  Produto(string nome, int quantidadeEstoque);
  Produto(size_t codigo, string nome, string unidadeMedida, float preco, int quantidadeEstoque);
};

#endif