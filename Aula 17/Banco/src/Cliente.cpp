#include "../include/Cliente.hpp"

#include <string>

int Cliente::qnt_clientes;

Cliente::Cliente() {
  this->qnt_clientes++;
}

Cliente::~Cliente() {
}