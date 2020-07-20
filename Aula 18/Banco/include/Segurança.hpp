#ifndef SEGURANCA_HPP
#define SEGURANCA_HPP

#include "Funcionario.hpp"

using namespace std;

class Seguranca : public Funcionario {
 protected:
  string funcao;

 public:
  Seguranca();
  ~Seguranca();

  void set_funcao(string funcao);
  string get_funcao();
};

#endif