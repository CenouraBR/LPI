#ifndef AGENCIA_HPP
#define AGENCIA_HPP
#include <string>

using namespace std;

class Agencia {
 public:
  string nome;
  int numero;
  static int qnt_agencias;

  Agencia();
  ~Agencia();
};
#endif