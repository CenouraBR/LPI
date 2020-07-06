#include <iostream>

#include "Conta.h"

int main(int argc, char *argv[]) {
  //criando conta 1 e conta 2
  Conta c1;
  c1.numero = 101608;
  c1.titular = "João da Silva";
  c1.saldo = 220.00;

  Conta c2;
  c2.numero = 211219;
  c2.titular = "Pedro Oliveira";
  c2.saldo = 350.50;

  //imnprimindo no terminal as contas
  std::cout << "Conta 1:\n"
            << "Número da conta: " << c1.numero << std::endl
            << "Nome titular:" << c1.titular << std::endl
            << "Saldo: " << c1.saldo << std::endl;

  std::cout << "\nConta 2:\n"
            << "Número da conta: " << c2.numero << std::endl
            << "Nome titular:" << c2.titular << std::endl
            << "Saldo: " << c2.saldo << std::endl;

  //transferindo da conta 1 para conta 2
  c1.transfere(30, c2);

  std::cout << "\nTransferencia de 30 reais da conta 1 para conta 2: \n"
            << "Saldo conta 1: " << c1.saldo << std::endl
            << "Saldo conta 2: " << c2.saldo << std::endl;

  //Depósito na conta 1
  c1.deposita(40);

  std::cout
      << "\nDepósito de 40 reais na conta 1: \n"
      << "Saldo conta 1: " << c1.saldo << std::endl;

  //Saque na conta 2
  c2.saca(20.50);

  std::cout
      << "\nSaque de 20.50 reais na conta 2: \n"
      << "Saldo conta 2: " << c2.saldo << std::endl;

  return 0;
}
