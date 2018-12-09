#include <iostream>
#include <string>

using namespace std;

int main() {
  int val1;
  int val2;
  int smaller;
  int larger;
  double ratio;

  cout << "Enter value 1:" << endl;
  cin >> val1;
  cout << "Now enter value 2:" << endl;
  cin >> val2;

  if (val1 < val2){
    smaller = val1;
    larger = val2;
  }
  else{
    smaller = val2;
    larger = val1;
  }

  ratio = double(larger) / double(smaller);

  if (smaller != larger)
    cout << larger << " is larger than " << smaller << endl;
  else
    cout << "Both numbers are equal" << endl;

  cout << "The sum of the two values is "<< val1 + val2 << endl;

  cout << "The difference between the two is " << larger - smaller << endl;

  cout << "Their product is " << val1 * val2 << endl;

  cout << "The ratio between the two is of approximately "  << ratio << endl;

  return 0;
}
