#include <iostream>

using namespace std;

class Shape {
public:
  int a = 7;
  virtual void print() = 0;
};

class Rectangle : public Shape {
  void print();
};

class Circle : public Shape {
  void print();
};

void print_shape(Shape& s) {
  s.print();
}

void Rectangle::print() {
  cout << "I am a rectangle" << endl;
  cout << "The value of a for me is " << a << endl << endl;
}

void Circle::print() {
  cout << "I am a circle" << endl;
  cout << "The value of a for me is " << a << endl << endl;
}

int main () {
  Circle c;
  Rectangle r;
  print_shape(c);
  print_shape(r);
}
