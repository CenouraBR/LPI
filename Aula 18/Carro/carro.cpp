#include "carro.hpp"

int Carro::qnt_carros;

Carro::Carro(string cor) {
  this->cor = cor;
  this->qnt_carros++;
}

Carro::Carro() {
  this->cor = "Branco";
  this->qnt_carros++;
}

void Carro::acelera(int velocidade) {
  this->velocidade += velocidade;
}

void Carro::freia(int velocidade) {
  this->velocidade -= velocidade;
}

void Carro::ligaCarro() {
  motor.partida();
}