#include <iostream>
#include "Stack.h"

int main() {
  std::cout << "Hola" << std::endl;
  Stack* stack = new Stack();
  stack->push(1);
  stack->push(2);
  stack->push(3);

  std::cout << stack->top() << std::endl; // Should print 3

  stack->pop();
  stack->pop();
  stack->pop();
  stack->pop();

  std::cout << stack->top() << std::endl; // Should print 3
  return 0;
}