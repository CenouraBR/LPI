#include "../include/Agencia.hpp"

#include <string>

int Agencia::qnt_agencias;

Agencia::Agencia() {
  this->qnt_agencias++;
}

Agencia::~Agencia() {
}