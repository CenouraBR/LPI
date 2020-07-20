#ifndef GERENTE_HPP
#define GERENTE_HPP

#include "Funcionario.hpp"

using namespace std;

class Gerente : public Funcionario {
 protected:
  string setor;

 public:
  Gerente();
  ~Gerente();

  void set_setor(string setor);
  string get_setor();
};

#endif