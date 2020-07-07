#include <iostream>

#include "Agencia.hpp"
#include "Cliente.hpp"
#include "Conta.hpp"

int main(int argc, char *argv[]) {
  //criando cliente
  Cliente cl1;
  cl1.nome = "João da Silva";
  cl1.cpf = 12345678900;

  Cliente cl2;
  cl2.nome = "Pedro da Silva";
  cl2.cpf = 98765432100;

  //criando agencia
  Agencia a1;
  a1.nome = "Banco de todos";
  a1.numero = 104050;

  Agencia a2;
  a2.nome = "Para todos";
  a2.numero = 203040;

  //criando conta 1 e conta 2
  Conta c1;
  c1.agencia = a1;
  c1.titular = cl1;
  c1.saldo = 200.50;

  Conta c2;
  c2.agencia = a2;
  c2.titular = cl2;
  c2.saldo = 125.00;

  //imnprimindo no terminal as contas
  std::cout << "Conta 1:\n"
            << "Número da conta: " << c1.agencia.numero << std::endl
            << "Nome da conta: " << c1.agencia.nome << std::endl
            << "Nome titular:" << c1.titular.nome << std::endl
            << "CPF titular:" << c1.titular.cpf << std::endl
            << "Saldo: " << c1.saldo << std::endl;

  std::cout << "\nConta 2:\n"
            << "Número da conta: " << c2.agencia.numero << std::endl
            << "Nome da conta: " << c2.agencia.nome << std::endl
            << "Nome titular:" << c2.titular.nome << std::endl
            << "CPF titular:" << c2.titular.cpf << std::endl
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
