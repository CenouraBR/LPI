#include "../include/Funcionario.hpp"

Funcionario::Funcionario() {
}
Funcionario::~Funcionario() {
}

void Funcionario::set_nome(string nome) {
  this->nome = nome;
}

string Funcionario::get_nome() {
  return this->nome;
}

void Funcionario::set_salario(float salario) {
  this->salario = salario;
}

float Funcionario::get_salario() {
  return this->salario;
}

void Funcionario::set_dia_pagamento(int dia_pagamento) {
  this->dia_pagamento = dia_pagamento;
}

int Funcionario::get_dia_pagamento() {
  return this->dia_pagamento;
}