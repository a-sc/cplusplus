#include <iostream>
#include <string>

using namespace std;

int main() {
  
  string first_name, friend_name, friend_sex, destination;
  int age;

  cout << "Enter your first name and press Enter" << endl;
  cin >> first_name;
  cout << "Hello, " << first_name << "!" << endl;

  cout << "Who are you looking for?" << endl;
  cin >> friend_name;

  cout << "Are they male (enter M) or female (enter F)?" << endl;
  cin >> friend_sex;

  cout << "Who do you want to write to?" << endl;
  cin >> destination;

  cout << "How old are they in years? Enter a number:" << endl;
  cin >> age;

  cout << "   Dear " << destination << ", " << endl <<
          "   How are you? I am fine." << endl << "   I miss you." << endl
          << "   If you see " << friend_name;

  if (friend_sex == "f" || friend_sex == "F")
    cout << " tell her to call me." << endl;
    else cout << " tell him to call me." << endl;

  if (age <= 12)
   cout << "   Next year you will be " << age + 1 << " years old!";
  else if (age == 17)
   cout << "   Next year you will be able to vote!";
  else if (age >= 70)
   cout << "   I hope you are enjoying your retirement";
  else
   cout << "   I heard you just turned " << age <<".";
  cout << endl << endl;
  cout << "Yours truly," << endl << endl << first_name << endl;

}
