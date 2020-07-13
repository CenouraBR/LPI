#include <iostream>
#include <vector>

#include "../include/Funcionario.hpp"

int main(int argc, char **argv) {
  std::string nome;
  Empresa e1;
  std::string departamento;
  float salario;
  std::string data;

  e1.set_nome("Jorgim celular");
  e1.set_CNPJ("123.456.789/9876-54");

  std::vector<Funcionario> funcionarios;

  int qtd;

  std::cout << "Qual será a quantidade de funcionário da empresa? " << std::endl;
  std::cin >> qtd;

  for (size_t i = 0; i < qtd; i++) {
    Funcionario f;
    f.set_empresa(e1);

    std::cout << "\nQual o nome do funcionario " << i + 1 << ": " << std::endl;
    std::cin >> nome;
    f.set_nome(nome);

    std::cout << "\nQual o salário do funcionario " << i + 1 << ": " << std::endl;
    std::cin >> salario;
    f.set_salario(salario);

    std::cout << "\nQual o departamento do funcionario " << i + 1 << ": " << std::endl;
    std::cin >> departamento;
    f.set_departamento(departamento);

    std::cout << "\nQual a data de admissão do funcionario " << i + 1 << ": " << std::endl;
    std::cin >> data;
    f.set_data_admissao(data);

    funcionarios.push_back(f);
  }

  std::cout << "\nQual o departamento que receberá um aumento de 10%: " << std::endl;
  std::string receber;
  std::cin >> receber;

  bool verificador = false;

  for (size_t i = 0; i < funcionarios.size(); i++) {
    if (funcionarios[i].get_departamento() == receber) {
      funcionarios[i].set_salario(funcionarios[i].get_salario() + (funcionarios[i].get_salario() * 0.10));
      std::cout << "\nFuncionário: " << funcionarios[i].get_nome() << std::endl
                << "Salário: R$" << funcionarios[i].get_salario() << std::endl;
      verificador = true;
    }
  }

  if (!verificador) {
    std::cout << "Não existem funcionários nesse departamento" << std::endl;
  }

  return 0;
}