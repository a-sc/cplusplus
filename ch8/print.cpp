#include "print.h"

using namespace std;

void print(string x, vector<int> y){
  cout << x << endl;

  for (int i = 0; i < y.size(); ++i) {
    cout << y[i] << endl;
  }
}
