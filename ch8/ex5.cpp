#include <iostream>
#include <vector>
#include <string>

using namespace std;

void swap(int& a, int&b) {
  int temp;
  temp = a;
  a = b;
  b = temp;
}

void reverse(vector<int> v, vector<int>& a){
  for (int i = 0; i < v.size(); ++i) {
    a.push_back(v[v.size()-i-1]);
  }
}

void reverse2(vector<int>& v){
  for (int i = 0; i < v.size()/2; ++i) {
    swap(v[i], v[v.size()-1-i]);
  }
}

int main() {
  vector<int> v = {1, 2, 3, 6, 7};
  vector<int> a;

//  reverse(v, a);
  reverse2(v);

/*

for (int i = 0; i < a.size(); ++i) {
    cout << a[i] << endl;
  }

*/

  for (int i : v) {
    cout << i << endl;
  }

  return 0;
}
