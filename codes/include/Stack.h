#ifndef STACK_H
#define STACK_H

class Stack {
  struct StackNode {
    int value;
    StackNode* next;
  };

 public:
  StackNode* topNode;

  Stack() { topNode = new StackNode(); };

  void push(int value) {
    StackNode* newNode = new StackNode;
    newNode->value = value;
    newNode->next = topNode;
    topNode = newNode;
  }

  void pop() {
    if (topNode != nullptr) {
      StackNode* temp = topNode;
      topNode = topNode->next;
      delete temp;  // ← aquí se libera el nodo que ya no se necesita
    }
  }
  int top() const {
    if (topNode) {
      return topNode->value;
    }
    return -1;  // Return a default value if the stack is empty
  };
};
#endif