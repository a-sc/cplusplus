#include <iostream>
#include <string>

using namespace std;

int main() {
  int val1;
  int val2;
  char c;
  int smaller;
  int larger;

  while (true) {
    cout << "Enter two whole numbers, or | if you want to stop the program: ";
    cin >> val1 >> val2;
    if (val1 >= val2) {
      smaller = val2;
      larger = val1;
    }
    else {
      smaller = val1;
      larger = val2;
    }

    if(!cin){
      cin.clear();
      cin >> c;
      if(c=='|') return 0;
    } else

    if (smaller != larger) {
      cout << "The smaller number is " << smaller << " and the larger one is " <<
       larger << endl;
    }
    else {
      cout << "The numbers are equal" << endl;
    }
  }
}
