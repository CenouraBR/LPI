#ifndef CLIENTEPF_HPP
#define CLIENTEPF_HPP
#include <string>

#include "Cliente.hpp"

class ClientePF : public Cliente {
 protected:
  string cpf;

 public:
  ClientePF();
  ~ClientePF();

  void set_cpf(string cpf);
  string get_cpf();
};
#endif