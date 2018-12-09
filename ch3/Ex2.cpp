#include <iostream>
#include <string>

using namespace std;

int main() {
  double value;
  string conversion;
  cout << "Enter a number of miles or kilometers:" << endl;
  cin >> value;
  cout << "Do you want to convert to miles (enter m) or kilometers (enter k)?" << endl;
  cin >> conversion;
  if (conversion == "m" || conversion == "M")
    cout << "There are " << value / 1.609 << " miles in " <<
    value << " kilometers." << endl;
  else
    cout << "There are " << value * 1.609 << " kilometers in " <<
    value << " miles." << endl;
  return 0;
}
