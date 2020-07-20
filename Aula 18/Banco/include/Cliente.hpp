
#ifndef CLIENTE_HPP
#define CLIENTE_HPP

#include <string>

using namespace std;

class Cliente {
 protected:
  string nome;
  int idade;
  static int qnt_clientes;

 public:
  Cliente();
  ~Cliente();
  void set_nome(string nome);
  string get_nome();

  void set_idade(int idade);
  int get_idade();
};

#endif