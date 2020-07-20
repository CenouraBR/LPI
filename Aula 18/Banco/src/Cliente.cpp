#include "../include/Cliente.hpp"

#include <string>

int Cliente::qnt_clientes;

Cliente::Cliente() {
  this->qnt_clientes++;
}

Cliente::~Cliente() {
}

void Cliente::set_nome(string nome) {
  this->nome = nome;
}

string Cliente::get_nome() {
  return this->nome;
}

void Cliente::set_idade(int idade) {
  this->idade = idade;
}

int Cliente::get_idade() {
  return this->idade;
}