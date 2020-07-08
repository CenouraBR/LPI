#ifndef AGENCIA_HPP
#define AGENCIA_HPP
#include <string>

class Agencia {
 public:
  std::string nome;
  int numero;
  static int qnt_agencias;

  Agencia();
  ~Agencia();
};
#endif