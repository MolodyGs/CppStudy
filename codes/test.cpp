#include <iostream>
#include "include/Entity.h"
#include "include/Amber.h"

using namespace std;

int number{1};
string cadena{"hola"};
// array of integers initialization as default
int arr[10];
Amber amber;

int main()
{
  amber = Amber();
  cout << "hola " << number << endl;
  cout << cadena << endl;
  for (int i = 0; i < 10; i++)
  {
    cout << arr[i] << " ";
  }
  // amber.sayhello();
  amber.attack();
  return 0;
}