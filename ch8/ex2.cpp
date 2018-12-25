#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print(string x, vector<int> y){
  cout << x << endl;

  for (int i = 0; i < y.size(); ++i) {
    cout << y[i] << endl;
  }
}


void fibonacci(int x, int y, vector<int>& v,int n){
  v.push_back(x);
  v.push_back(y);
  for(int i = 1; i <= n-2; ++i){
    v.push_back(v[i]+v[i-1]);
  }
}


int main() {
  int x;
  int y;
  int n;
  string a = "The fibonacci sequence up to the desired number with the desired first two numbers is:";
  vector<int> v;

  cout << "Enter the two numbers you would like the sequence to start with:" << endl;
  cin >> x >> y;

  cout << "How many numbers of the sequence should be printed?" << endl;
  cin >> n;

  fibonacci(x, y, v, n);

  print(a,v);

  return 0;
}
