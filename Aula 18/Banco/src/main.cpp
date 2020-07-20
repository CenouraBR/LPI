#include <iostream>

#include "../include/Caixa.hpp"
#include "../include/ClientePF.hpp"
#include "../include/ClientePJ.hpp"
#include "../include/Conta.hpp"
#include "../include/Fila.hpp"
#include "../include/Gerente.hpp"
#include "../include/Segurança.hpp"

int main(int argc, char *argv[]) {
  //instanciando
  ClientePF pf1;
  ClientePJ pj1;
  Gerente g1;
  Seguranca s1;
  Caixa c1;

  //atribuindo valores ao cliente
  g1.set_nome("João das Neves");
  g1.set_salario(5056.76);
  g1.set_dia_pagamento(10);
  g1.set_setor("Informática");

  c1.set_nome("Marcelão");
  c1.set_salario(4002.00);
  c1.set_dia_pagamento(11);
  c1.set_ganhos(100.45);

  s1.set_nome("José");
  s1.set_salario(4600.00);
  s1.set_dia_pagamento(11);
  s1.set_funcao("Guarda noturno");

  pf1.set_nome("Bernardo");
  pf1.set_idade(51);
  pf1.set_cpf("121.142.132-40");

  pj1.set_nome("Pedro");
  pj1.set_idade(34);
  pj1.set_cnpj("121.142.132-40");

  std::cout << "\nClientes:" << std::endl;
  std::cout << pf1.get_nome() << std::endl;
  std::cout << pj1.get_nome() << std::endl;
  std::cout << "\nFuncionários:" << std::endl;
  std::cout << g1.get_nome() << std::endl;
  std::cout << s1.get_nome() << std::endl;
  std::cout << c1.get_nome() << std::endl;

  return 0;
}
