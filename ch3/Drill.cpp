#include <iostream>
#include <string>

using namespace std;

int main() {
  cout << "Enter your first name and press Enter" << endl;
  string first_name;
  cin >> first_name;
  cout << "Hello, " << first_name << "!" << endl;
  cout << "Who are you looking for?" << endl;
  string friend_name;
  cin >> friend_name;
  cout << "Are they male (enter M) or female (enter F)?" << endl;
  string friend_sex;
  cin >> friend_sex;
  cout << "Who do you want to write to?" << endl;
  string destination;
  cin >> destination;
  int age;
  cout << "How old are they in years? Enter a number:" << endl;
  cin >> age;
  if (friend_sex == "f" || friend_sex == "F") {
      if (age <= 12){
        cout << "   Dear " << destination << ", " << endl << "   How are you? I am fine." << endl << "   I miss you." << endl << "   If you see " << friend_name << " tell her to call me." << endl << "   Next year you will be " << age+1 << " years old!" << endl << endl << "Yours truly," << endl << endl << first_name << endl;
        return 0;
      }
      if (age == 17){
        cout << "   Dear " << destination << ", " << endl << "   How are you? I am fine." << endl << "   I miss you." << endl << "   If you see " << friend_name << " tell her to call me." << endl << "   Next year you will be able to vote!" << endl << endl << "Yours truly," << endl << endl << first_name << endl;
        return 0;
      }
      if (age >= 70){
        cout << "   Dear " << destination << ", " << endl << "   How are you? I am fine." << endl << "   I miss you." << endl << "   If you see " << friend_name << " tell her to call me." << endl << "   I hope you're enjoying retirement!" << endl << endl << "Yours truly," << endl << endl << first_name << endl;
        return 0;
      }
      cout << "   Dear " << destination << ", " << endl << "   How are you? I am fine." << endl << "   I miss you." << endl << "   If you see " << friend_name << " tell her to call me." << endl << "   I heard you just turned " << age << "! Happy birthday!" << endl << endl << "Yours truly," << endl << endl << first_name << endl;
      return 0;
  }
  if (friend_sex == "m" || friend_sex == "M") {
    if (age <= 12){
      cout << "   Dear " << destination << ", " << endl << "   How are you? I am fine." << endl << "   I miss you." << endl << "   If you see " << friend_name << " tell him to call me." << endl << "   Next year you will be " << age+1 << " years old!" << endl << endl << "Yours truly," << endl << endl << first_name << endl;
      return 0;
    }
    if (age == 17){
      cout << "   Dear " << destination << ", " << endl << "   How are you? I am fine." << endl << "   I miss you." << endl << "   If you see " << friend_name << " tell him to call me." << endl << "   Next year you will be able to vote!" << endl << endl << "Yours truly," << endl << endl << first_name << endl;
      return 0;
    }
    if (age >= 70){
      cout << "   Dear " << destination << ", " << endl << "   How are you? I am fine." << endl << "   I miss you." << endl << "   If you see " << friend_name << " tell him to call me." << endl << "   I hope you're enjoying retirement!" << endl << endl << "Yours truly," << endl << endl << first_name << endl;
      return 0;
    }
    cout << "   Dear " << destination << ", " << endl << "   How are you? I am fine." << endl << "   I miss you." << endl << "   If you see " << friend_name << " tell him to call me." << endl << "   I heard you just turned " << age << "! Happy birthday!" << endl << endl << "Yours truly," << endl << endl << first_name << endl;
    return 0;  }
}
