#include <iostream>
#include <string>

using namespace std;

int main() {
  int val1;
  int val2;
  char c;
  
  while (true) {
    cout << "Enter two whole numbers, or | if you want to stop the program: ";
    cin >> val1 >> val2;
    if(!cin){
      cin.clear();
      cin >> c;
      if(c=='|') return 0;
    } else
    cout << "The numbers you entered are " << val1 << " and " << val2 << endl;
  }
}
