
struct StackNode
{
  int value;
  StackNode* next;
};

class Stack
{
  public:
  StackNode* topNode;

  Stack();

  void push(int value);
  void pop();
  int top() const;
};