#include <iostream>

using namespace std;

double* myaux_pointer;

void myfunc(){
  int j;
  int* ip = new int;
  double* dp = new double;
  *ip = 5;
  *dp = 3.141592;

  cout << "the integer pointer points to address " << ip << " in the heap" << endl;
  cout << "the contents of that address are " << *ip << endl;

  cout << "the double pointer points to address " << dp << " in the heap" << endl;
  cout << "the contents of that address are " << *dp << endl;

  myaux_pointer = dp;

  cout << "myfunc was called" << endl;
  cout << "the address of j in myfunc is " << &j << endl;

}

int main(){
  int i;
  int j;

  myfunc();

  cout << "end of main" << endl;
  cout << "the address of i in the main program is " << &i << endl;
  cout << "the address of j in the main program is " << &j << endl;

  cout << "The double in the heap is still " << *myaux_pointer << endl;
}
