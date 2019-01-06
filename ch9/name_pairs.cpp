#include "name_pairs.h"
#include <iostream>
#include <vector>

using namespace std;

void change_int(double& a, double& b){
    double temp;
    temp = a;
    a = b;
    b = temp;
}

void change_string(string& x, string& y){
  string temp;
  temp = x;
  x = y;
  y = temp;
}

void Name_pairs::read_names(){
  cout << "Type the names you would like to make a list of, then add / at the end:" << endl;
  for (int i = 0; i < 1;) {
    cin >> name;
    if (name != "/") {
      names.push_back(name);
    }
    else
     break;
  }
}

void Name_pairs::read_ages(){
  cout << "Now type the ages you would like to go with the names" << endl;
  for (int i = 0; i < names.size(); ++i) {
    cin >> age;
    ages.push_back(age);
  }
}

void Name_pairs::print(){
  for (int i = 0; i < names.size(); ++i) {
    cout << names[i] << " " << ages[i] << endl;
  }
}

void Name_pairs::sort(){
  for (int x = 0; x < names.size(); ++x){
    for (int i = 0; i < names.size()-1; ++i) {
      if (names[i] > names[i+1]){
        change_string(names[i], names[i+1]);
        change_int(ages[i], ages[i+1]);
      }
    }
  }
}
