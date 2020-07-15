#include <iostream>

#include "../include/Cliente.hpp"
#include "../include/ClientePJ.hpp"
#include "../include/Conta.hpp"
#include "../include/Fila.hpp"

int main(int argc, char *argv[]) {
  //criando clientes
  Cliente c1;
  Cliente c2;
  ClientePJ pj1;
  ClientePJ pj2;

  //atribuindo valores ao cliente
  c1.nome = "João";
  c2.nome = "Ze";
  pj1.set_razao_social("Joaozim");
  pj2.set_razao_social("Zezim");

  //criando fila de clientes e clientePJ
  Fila<Cliente> Fila_cliente(3);
  Fila<ClientePJ> Fila_clientePJ(3);

  Fila_cliente.push(c1);
  Fila_cliente.push(c2);
  Fila_clientePJ.push(pj1);
  Fila_clientePJ.push(pj2);

  //imprimindo a situaçao da fila

  std::cout << "Primeiro cliente da fila: " << Fila_cliente.front().nome << std::endl;
  std::cout << "Primeiro clientePJ da fila: " << Fila_clientePJ.front().get_razao_social() << std::endl;
  std::cout << "Ultimo cliente da fila: " << Fila_cliente.back().nome << std::endl;
  std::cout << "Ultimo clientePJ da fila: " << Fila_clientePJ.back().get_razao_social() << std::endl;

  std::cout << "\nA fila esta vazia? se sim = 1, não = 0" << std::endl;
  std::cout << "\nFila cliente: " << Fila_cliente.isEmpty() << std::endl;
  std::cout << "Fila clientePJ: " << Fila_clientePJ.isEmpty() << std::endl;

  Fila_cliente.pop();
  Fila_clientePJ.pop();

  std::cout << "\nTamanho da fila cliente: " << Fila_cliente.sizeOf() << std::endl;
  std::cout << "Tamanho da fila clientePJ: " << Fila_clientePJ.sizeOf() << std::endl;

  return 0;
}
