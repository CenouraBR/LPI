#ifndef FILA_HPP
#define FILA_HPP

#include <iostream>
using namespace std;
template <class T>

class Fila {
 private:
  int size;
  int top;
  T* elements;

 public:
  Fila(int s) {
    this->size = s;
    this->top = -1;
    this->elements = new T[size];
  }
  void push(T element) {
    if (top == size - 1) {
      std::cout << "Fila cheia" << std::endl;
    } else {
      this->elements[++top] = element;
    }
  }
  void pop() {
    if (top == -1) {
      std::cout << "Fila vazia" << std::endl;
    } else {
      this->elements[top--];
    }
  }
  bool isEmpty() {
    if (top == -1) {
      return true;
    } else {
      return false;
    }
  }
  T back() {
    return this->elements[top];
  }
  T front() {
    return this->elements[0];
  }
  int sizeOf() {
    return this->size;
  }
};

#endif