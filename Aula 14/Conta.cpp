#include "Conta.hpp"

void Conta::saca(float valor) {
  this->saldo -= valor;
}

void Conta::deposita(float valor) {
  this->saldo += valor;
}

void Conta::transfere(float valor, Conta &conta_destino) {
  this->saldo -= valor;
  conta_destino.saldo += valor;
}