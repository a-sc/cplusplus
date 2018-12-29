#include "fibonacci.h"

using namespace std;

int main(){
  vector<int> v = {1,2,3};
  int x = 1;
  int y = 2;

  for (int n = 3; v[v.size()-1] > v[v.size()-2]; ++n) {
    fibonacci(x, y, v, n);
  }

  cout << "The largest number an int can go to is approximately " << v[v.size()-2] << endl;

  return 0;
}
