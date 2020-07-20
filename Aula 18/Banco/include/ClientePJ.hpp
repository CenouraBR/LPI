#include <string>

#include "Cliente.hpp"

using namespace std;

class ClientePJ : public Cliente {
 protected:
  string cnpj;
  string razao_social;

 public:
  void set_razao_social(string razao);
  string get_razao_social();

  void set_cnpj(string cnpj);
  string get_cnpj();

  ClientePJ();
  ~ClientePJ();
};