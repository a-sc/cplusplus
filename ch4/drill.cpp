#include <iostream>
#include <string>

using namespace std;

int main() {
  int val1;
  int val2;

  while (true) {
    cout << "Enter two whole numbers, or | if you want to stop the program: " << endl;
    cin >> val1;
    if (!cin) {
       return 0;
    }
    cin >> val2;

    // if (val1 == int(|) || val2 == int(|))
    //   return 0;

    cout << "The numbers you entered are " << val1 << " and " << val2 << endl;
  }
}
