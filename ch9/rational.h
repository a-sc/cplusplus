#include <vector>
#include <string>

class Rational {
public:
  Rational(int num, int den);
  void print();
  int num() const;
  int den() const;
  void setNum(int num);
  void setDen(int den);
  void simplify();
// void assignRationals();
// Rational addRationals();
// Rational subRationals();
// Rational multiRationals();
// Rational divRationals();
// bool isequalRationals();
// double convertRationals();
private:
int numerator;
int denominator;
};

Rational operator*(const Rational& a, const Rational& b);
