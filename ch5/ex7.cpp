#include <iostream>
#include <cmath> // to use sqrt(double)

using namespace std;

// Calculates sqrt(b^2-4ac)
// Throws an exception if (b^2-4ac) is negative

class Negative {};

double root_part(double a, double b, double c){
  double root = pow(b, 2)-(4*a*c);
if  (root < 0)
  throw Negative{};
return sqrt(root);
}

// Asks user to enter three doubles a, b and c
// Then outputs the solutions of the quadratic
// equation whose coefficients are a, b and c.
// If solutions are complex, it outputs an error
// message.
int main () {
double a;
double b;
double c;
double root;

cout << "Enter the values a, b and c:";
cin >> a;
cin >> b;
cin >> c;

cout << endl;

try{
  root = root_part(a, b, c);
  cout  << (-b + root) / (2*a) << " or " << (-b - root) / (2*a) << endl;
}

catch(Negative){
  cout << "B^2 - 4ac cannot equal less than 0." << endl;
}

}
