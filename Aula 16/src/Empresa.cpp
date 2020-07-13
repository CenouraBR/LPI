#include "../include/Empresa.hpp"

Empresa::Empresa() {
}
Empresa::~Empresa() {
}

void Empresa::set_nome(string nome) {
  this->nome = nome;
}

string Empresa::get_nome() {
  return this->nome;
}

void Empresa::set_CNPJ(string CNPJ) {
  this->CNPJ = CNPJ;
}

string Empresa::get_CNPJ() {
  return this->CNPJ;
}