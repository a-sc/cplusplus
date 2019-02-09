#include "rational.h"
#include <iostream>

using namespace std;

Rational::Rational(int num, int den) {
  numerator = num;
  denominator = den;
}

string Rational::print() {
  string a;
  a = to_string(numerator) + '/' + to_string(denominator);
  return a;
  //cout << "I am a rational number: " << numerator << "/" << denominator << endl;
}

int Rational::num() const {
  return numerator;
}

void Rational::setNum(int num){
  numerator = num;
}

int Rational::den() const {
  return denominator;
}

void Rational::setDen(int den){
  denominator = den;
}

Rational operator*(const Rational& a, const Rational& b){
  Rational result {1, 1};
  result.setNum(a.num()*b.num());
  result.setDen(a.den()*b.den());
  return result;
}

Rational operator/(const Rational& a, const Rational& b){
  Rational result {1, 1};
  result.setNum(a.num()*b.den());
  result.setDen(a.den()*b.num());
  return result;
}

void Rational::simplify(){
  int smallest;

  if (numerator < denominator)
    smallest = numerator;
  else
    smallest = denominator;
  if (smallest == 1) return;
  for (int i = 2; i <= smallest; i++) {
    if (numerator%i == 0 && denominator%i == 0){
      numerator = numerator / i;
      denominator = denominator / i;
      simplify();
      return;
    }
  }
}

ostream& operator<<(ostream& os, const Rational& b){
  return os << b.num() << "/" << b.den();
}

//
// void Rational::assignRationals(Rational a){
//   cout << "Enter the nominator you would like followed by the denominator of choice:" << endl;
//   cin >> a.nominator();
//   cin >> a.denominator();
// }

// Rational Rational::addRationals(Rational a, Rational b){
//   double temp;
//   Rational result;
//   temp = a.denominator();
//   a.nominator() = a.nominator() * b.denominator();
//   a.denominator() = a.denominator() * b.denominator();
//   b.nominator() = b.nominator() * temp;
//   b.denominator() = b.denominator() * temp;
//
//   result.nominator() = a.nominator() + b.nominator();
//   result.denominator() = a.denominator();
//   return result;
// }
//
// Rational Rational::subRationals(Rational a, Rational b){
//   double temp;
//   Rational result;
//   temp = a.denominator();
//   a.nominator() = a.nominator() * b.denominator();
//   a.denominator() = a.denominator() * b.denominator();
//   b.nominator() = b.nominator(); * temp;
//   b.denominator() = b.denominator() * temp;
//
//   if(a.nominator() > b.nominator()){
//     result.nominator() = a.nominator() - b.nominator();
// }
//   else
//     result.nominator() = a.nominator() - b.nominator();
//
//   result.denominator() = a.denominator();
//   return result;
// }
//
// Rational Rational::multiRationals(Rational a, Rational b){
//   Rational result;
//   result.nominator() = a.nominator() * b.nominator();
//   result.denominator() = a.denominator() * b.denominator();
//   return result;
// }
//
// Rational Rational::divRationals(Rational a, Rational b){
//   Rational result;
//   double temp;
//   temp = a.nominator();
//
//   a.nominator() = a.denominator();
//   a.denominator() = temp;
//
//   result.nominator() = a.nominator() * b.nominator();
//   result.denominator() = a.denominator() * b.denominator();
//   return result;
// }
//
// Bool Rational::isequalRationals(Rational a, Rational b){
//   double x;
//   double y;
//
//   x = a.nominator() / a.denominator();
//   y = b.nominator() / b.denominator();
//
//   if (x == y){
//     return true;
//   }
//   return false;
// }
//
// double Rational::convertRationals(Rational a){
//   double x;
//   x = a.nominator() / a.denominator();
//   return x;
// }
