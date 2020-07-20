#include "../include/Caixa.hpp"

Caixa::Caixa() {
}
Caixa::~Caixa() {
}

void Caixa::set_ganhos(float ganhos) {
  this->ganhos = ganhos;
}
float Caixa::get_ganhos() {
  return this->ganhos;
}
