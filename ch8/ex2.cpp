#include <iostream>
#include <string>
#include <vector>
#include "print.h"
#include "fibonacci.h"

using namespace std;

int main() {
  int x;
  int y;
  int n;
  string a = "The fibonacci sequence up to the desired number with the desired first two numbers is:";
  vector<int> v;
  cout << "Enter the two numbers you would like the sequence to start with:" << endl;
  cin >> x >> y;

  cout << "How many numbers of the sequence should be printed?" << endl;
  cin >> n;

  fibonacci(x, y, v, n);

  print(a,v);

  return 0;
}
