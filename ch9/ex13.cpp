#include "rational.h"
#include <iostream>

using namespace std;

int main() {
  Rational a {1, 1};
  int b, c;

  while (true) {
    Rational r {1,3};
    Rational e {1,1};

    cout << endl << "Enter numerator and denominator of a rational number: ";
    cin >> b >> c;
    if (c==0) return 0;
    a.setNum(b);
    a.setDen(c);
    cout << "The rational number is: " << a.print();
    a.simplify();
    cout << endl << "Simplified: " << a.print() << endl;
    e = a/r;
    e.simplify();
    //cout << e.print();
    cout << e;
  }
  // Rational b {3, 321};
  // Rational c {1, 1};
  // c = a * b;
  // c.print();
  // c.simplify();
  // c.print();
  // Rational c = a + b;
  // Rational addition;
  // assignRationals(a);
  // assignRationals(b);
  // addition.nominator() = addRationals(a,b).nominator();
  // cout << "If you add those two rationals, you get" << addition.nominator() << endl << "/" << endl << addition.denominator();
  return 0;
}
