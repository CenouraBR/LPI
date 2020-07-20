#ifndef WSN_VECTOR_SUPERMERCADO_HPP
#define WSN_VECTOR_SUPERMERCADO_HPP

#include <iostream>
using namespace std;
template <typename T>
class Vector_supermercado {
 private:
  T* vetor;
  int capacidade;
  int atual;

 public:
  Vector_supermercado() : vetor(nullptr), capacidade(2), atual(0) {
    this->vetor = new T[capacidade];
  }

  void push_back(T v) {
    if (atual == capacidade) {
      T* dobro;
      dobro = new T[2 * capacidade];
      for (size_t i = 0; i < capacidade; i++) {
        dobro[i] = vetor[i];
      }
      delete[] vetor;
      this->capacidade *= 2;
      this->vetor = dobro;
    }
    vetor[atual] = v;
    atual += 1;
  }
  void push_back(T v, int indice) {
    if (indice == capacidade)
      push_back(v);
    else
      this->vetor[indice] = v;
  }
  void pop() {
    this->atual -= 1;
  }
  int size() {
    return atual;
  }
  T front() {
    return this->vetor[0];
  }
  T back() {
    return this->vetor[atual];
  }
  T* begin() {
    return &vetor[0];
  }
  T* end() {
    return &vetor[atual];
  }
  T* operador(int pos) {
    return &vetor[pos];
  }
};

#endif
