#include "fibonacci.h"

using namespace std;

void fibonacci(int x, int y, vector<int>& v,int n){
  v.push_back(x);
  v.push_back(y);
  for(int i = 1; i <= n-2; ++i){
    v.push_back(v[i]+v[i-1]);
  }
}
