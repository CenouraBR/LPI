#ifndef CLIENTE_HPP
#define CLIENTE_HPP
#include <string>

class Cliente {
 public:
  std::string nome;
  size_t cpf;
  static int qnt_clientes;

  Cliente();
  ~Cliente();
};
#endif