#include <iostream>
#include <string>

using namespace std;

string return_my_name(){
  string s = "Adrian";
  return s;
}

int main()
{
  cout << "Hello, World!\n";
  cout << "My name is " << return_my_name() << endl;
  return 0;
}
