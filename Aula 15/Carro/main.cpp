#include <iostream>

#include "carro.hpp"

using namespace std;

int main() {
  //criando carros
  Carro c1;
  Carro c2;

  std::cout << "Quantidade carros após adicionar dois carros: " << c1.qnt_carros << std::endl;

  Carro c3;
  std::cout << "Quantidade carros após adicionar mais um carro: " << c1.qnt_carros << std::endl;

  return 0;
}