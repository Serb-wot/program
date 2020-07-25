#include <iostream>
using namespace std;

int main()
{
  int firstNumber,secondNumber;
  int result;
  
  cout << "please input the first number: ";
  cin >> firstNumber;
  cout << "please input the second number: ";
  cin >> secondNumber;
  
  result = firstNumber + secondNumber;
  cout << firstNumber << " + " << secondNumber;
  cout << " = " << result;
  
  return 0;
}