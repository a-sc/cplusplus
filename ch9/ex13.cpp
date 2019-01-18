#include "rational.h"
#include <iostream>

int main() {
  Rational a {36, 120};
  Rational b {3, 321};
  Rational c {1, 1};
  c = a * b;
  c.print();
  c.simplify();
  c.print();
  // Rational c = a + b;
  // Rational addition;
  // assignRationals(a);
  // assignRationals(b);
  // addition.nominator() = addRationals(a,b).nominator();
  // cout << "If you add those two rationals, you get" << addition.nominator() << endl << "/" << endl << addition.denominator();
  return 0;
}
