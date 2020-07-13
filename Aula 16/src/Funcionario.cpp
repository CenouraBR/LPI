#include "../include/Funcionario.hpp"

Funcionario::Funcionario() {
}

Funcionario::~Funcionario() {
}

void Funcionario::set_nome(std::string nome) {
  this->nome = nome;
}

string Funcionario::get_nome() {
  return this->nome;
}

void Funcionario::set_empresa(Empresa empresa) {
  this->empresa = empresa;
}

Empresa Funcionario::get_empresa() {
  return this->empresa;
}

void Funcionario::set_departamento(std::string departamento) {
  this->departamento = departamento;
}

std::string Funcionario::get_departamento() {
  return this->departamento;
}

void Funcionario::set_salario(float salario) {
  this->salario = salario;
}

float Funcionario::get_salario() {
  return this->salario;
}

void Funcionario::set_data_admissao(string data) {
  this->data_admissao = data;
}

string Funcionario::get_data_admissao() {
  return this->data_admissao;
}