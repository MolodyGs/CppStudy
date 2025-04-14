#include <iostream>
#include "Stack.h"

int main() {
  std::cout << "Hola" << std::endl;
  Stack* stack = new Stack();
  stack->push(1);
  stack->push(2);
  stack->push(3);

  std::cout << stack->top() << std::endl; 

  stack->pop();
  stack->pop();
  stack->pop();

  return 0;
}