#ifndef FUNCIONARIO_HPP
#define FUNCIONARIO_HPP

#include <string>

#include "Empresa.hpp"

using namespace std;

class Funcionario {
 private:
  string nome;
  Empresa empresa;
  string departamento;
  float salario;
  string data_admissao;

 public:
  Funcionario();
  ~Funcionario();

  void set_nome(string nome);
  string get_nome();

  void set_empresa(Empresa empresa);
  Empresa get_empresa();

  void set_departamento(string departamento);
  string get_departamento();

  void set_salario(float salario);
  float get_salario();

  void set_data_admissao(string data);
  string get_data_admissao();
};

#endif