#include <iostream>
#include <string>

using namespace std;

int main() {
  string operation;
  double a;
  double b;

  cout << "Enter the operator (+ - / *) followed by a space, a number, a space,
   and another number:" << endl;
  cin >> operation;
  cin >> a;
  cin >> b;

  if (operation == "+")
    cout << a + b << endl;
  else if (operation == "-")
    cout << a - b << endl;
  else if (operation == "*")
    cout << a * b << endl;
  else
    cout << a / b << endl;
  return 0;
}
