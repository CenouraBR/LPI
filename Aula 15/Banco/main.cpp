#include <iostream>

#include "Cliente.hpp"
#include "Conta.hpp"

int main(int argc, char *argv[]) {
  //criando cliente e conta
  Cliente cl1;

  std::cout << "Quantidade clientes após adicionar um cliente: " << cl1.qnt_clientes << std::endl;

  Agencia a1;

  std::cout << "Quantidade agencias após adicionar uma agência: " << a1.qnt_agencias << std::endl;

  Conta c1;
  std::cout << "Quantidade de contas aós criar uma conta: " << c1.qnt_contas << std::endl;
  std::cout << "Quantidade clientes após criar uma conta com um novo cliente: " << cl1.qnt_clientes << std::endl;
  std::cout << "Quantidade agencias após criar uma conta com uma nova agencia: " << cl1.qnt_clientes << std::endl;

  return 0;
}
