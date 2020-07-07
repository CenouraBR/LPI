#ifndef CONTA_HPP
#define CONTA_HPP

#include <iostream>
#include <string>

#include "Agencia.hpp"
#include "Cliente.hpp"

class Conta {
 public:
  Cliente titular;
  float saldo;
  Agencia agencia;

  void saca(float valor);
  void deposita(float valor);
  void transfere(float valor, Conta &conta_destino);
};

#endif