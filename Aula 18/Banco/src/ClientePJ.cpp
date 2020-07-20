#include "../include/ClientePJ.hpp"

ClientePJ::ClientePJ() {
}
ClientePJ::~ClientePJ() {
}

void ClientePJ::set_razao_social(string razao) {
  this->razao_social = razao;
}

string ClientePJ::get_razao_social() {
  return this->razao_social;
}

void ClientePJ::set_cnpj(string cnpj) {
  this->cnpj = cnpj;
}

string ClientePJ::get_cnpj() {
  return this->cnpj;
}