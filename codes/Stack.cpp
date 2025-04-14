
#include "Stack.h"

#include <iostream>
using namespace std;

Stack::Stack()
{
  topNode = nullptr;
}

void Stack::push(int value)
{
  StackNode* newNode = new StackNode;
  newNode->value = value;
  newNode->next = topNode;
  topNode = newNode;
}

void Stack::pop()
{
  
  if (topNode != nullptr)
  {
    StackNode* temp = topNode;
    topNode = topNode->next;

    delete temp;
  }
  else { cout << "Stack is empty from pop" << endl; }
}
int Stack::top() const
{
  if (topNode != nullptr)
  {
    return topNode->value;
  }

  cout << "Stack is empty from top" << endl;
  return -1;;
};