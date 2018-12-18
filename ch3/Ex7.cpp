#include <iostream>
#include <string>

using namespace std;

int main() {
  string one;
  string two;
  string three;

  cout << "Enter three words separated by spaces:" << endl;

  cin >> one;
  cin >> two;
  cin >> three;

  if (one <= two && one <= three) {
    cout << one << " ";
      if (two <= three){
        cout << two << " " << three << endl;
        return 0;
      }
      else{
        cout << three << " " << two << endl;
        return 0;
      }
  }
  else if (two <= three && two <= one){
    cout << two << " ";
    if (one <= three){
      cout << one << " " << three << endl;
      return 0;
    }
    else{
      cout << three << " " << one << endl;
      return 0;
    }
  }
  else {
    cout << three << " ";
    if (one <= two) {
      cout << one << " " << two << endl;
      return 0;
    }
    else{
      cout << two << " " << one << endl;
      return 0;
    }
  }
}
