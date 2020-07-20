#include "../include/Segurança.hpp"

Seguranca::Seguranca() {
}

Seguranca::~Seguranca() {
}

void Seguranca::set_funcao(string funcao) {
  this->funcao = funcao;
}

string Seguranca::get_funcao() {
  return this->funcao;
}