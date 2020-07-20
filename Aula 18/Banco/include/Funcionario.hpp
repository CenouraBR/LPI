#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <string>

using namespace std;

class Funcionario {
 protected:
  string nome;
  float salario;
  int dia_pagamento;

 public:
  void set_nome(string nome);
  string get_nome();

  void set_dia_pagamento(int dia_pagamento);
  int get_dia_pagamento();

  void set_salario(float salario);
  float get_salario();

  Funcionario();
  ~Funcionario();
};

#endif