#include <iostream>
#include <stdexcept>

using namespace std;
int area(int length, int width){
	if(length<0 || width <0)
	  throw runtime_error("At least one argument is negative");
	return length*width;
}

int main(){
	int a;
	int b;
	cout << "Hello user" << endl;
	cout << "Give me the width of the rectangle" << endl;
	cin >> a;
	cout << "Give me the length of the rectangle" << endl;
	cin >> b;
	try{
	 int my_area = area(a,b);
	 cout << "the area is " << my_area << "\n";
	}
	catch (runtime_error e){
		cout << "Sorry, the arguments were not valid" << endl;
		cout << "Runtime exception: " << e.what() << endl;
	}
}
