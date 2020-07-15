#include "../include/ClientePJ.hpp"

void ClientePJ::set_razao_social(string razao) {
  this->razao_social = razao;
}

string ClientePJ::get_razao_social() {
  return this->razao_social;
}

void ClientePJ::set_CNPJ(string cnpj) {
  this->CNPJ = cnpj;
}

string ClientePJ::get_CNPJ() {
  return this->CNPJ;
}