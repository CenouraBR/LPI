#ifndef CONTA_H
#define CONTA_H_

#include <iostream>
#include <string>

class Conta {
 public:
  int numero;
  std::string titular;
  float saldo;
  void saca(float valor);
  void deposita(float valor);
  void transfere(float valor, Conta &conta_destino);
};

#endif