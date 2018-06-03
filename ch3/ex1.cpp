#include <iostream>
#include <string>

using namespace std;

int main () {
	char my_char;
	string name;
	cout << "Give me your name: ";
	cin >> name;
	if (name == "Javier") 
	 cout << "Hola " << name << "!\n";
	else 
	 cout << "Hello " << name << "!\n";
	cout << "Give me a character: ";
	cin >> my_char;
	cout << "The character you gave me is " << my_char << "\n";
	cout << "If we were to interpret it as an integer it would be " << int(my_char) << "\n";
	return 0;
}