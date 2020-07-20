#ifndef CAIXA_HPP
#define CAIXA_HPP

#include "Funcionario.hpp"

using namespace std;

class Caixa : public Funcionario {
 protected:
  float ganhos;

 public:
  Caixa();
  ~Caixa();

  void set_ganhos(float ganhos);
  float get_ganhos();
};

#endif