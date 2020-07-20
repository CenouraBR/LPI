#include "../include/ClientePF.hpp"

ClientePF::ClientePF() {
}

ClientePF::~ClientePF() {
}

void ClientePF::set_cpf(string cpf) {
  this->cpf = cpf;
}

string ClientePF::get_cpf() {
  return this->cpf;
}