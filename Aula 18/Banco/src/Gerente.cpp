#include "../include/Gerente.hpp"

Gerente::Gerente() {
}

Gerente::~Gerente() {
}

void Gerente::set_setor(string setor) {
  this->setor = setor;
}

string Gerente::get_setor() {
  return this->setor;
}