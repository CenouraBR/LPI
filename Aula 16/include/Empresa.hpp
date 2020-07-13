#ifndef EMPRESA_HPP
#define EMPRESA_HPP

#include <string>
using namespace std;

class Empresa {
 private:
  string nome;
  string CNPJ;

 public:
  Empresa();
  ~Empresa();

  void set_nome(std::string nome);
  string get_nome();

  void set_CNPJ(std::string CNPJ);
  string get_CNPJ();
};

#endif