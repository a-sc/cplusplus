#include <iostream>
#include <string>
#include <stdexcept>
#include <limits>

using namespace std;

int get_an_int(string prompt){
  int a;
  while(true){
    cout << prompt << ": ";
    cin >> a;
    if (cin) return a;
     else {
      cin.clear();
      cout << "Sorry, I need an integer." << endl;
      cin.ignore(numeric_limits<streamsize>::max(), '\n');
     }
  }
}


int area(int length, int width){
	if(length<0 || width <0)
	  throw runtime_error("At least one argument is negative");
	return length*width;
}

int main(){
	int a;
	int b;
	cout << "Hello user" << endl;
	a = get_an_int("Give me the width of the rectangle");
	b = get_an_int("Give me the length of the rectangle");
	try{
	 int my_area = area(a,b);
	 cout << "the area is " << my_area << "\n";
	}
	catch (runtime_error e){
		cout << "Sorry, the arguments were not valid" << endl;
		cout << "Runtime exception: " << e.what() << endl;
	}
}
