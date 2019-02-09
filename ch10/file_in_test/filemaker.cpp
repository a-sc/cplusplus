#include <iostream>
#include <string>
#include <fstream>
#include <vector>

using namespace std;

class Point {
public:
  double x;
  double y;

};

istream& operator>>(istream& is, Point& pt) {
  return is >> pt.x >> pt.y;
}

int main(){
  string file_name = "data.txt";
  ifstream ifs {file_name};
  vector<Point> my_vect;
  string name;

  for(Point pt; ifs>>pt;) {
    my_vect.push_back(pt);
  }

  cout << "Enter the name of the file you wish to add the points to: " << endl;
  cin >> name;

  ofstream ofs (name);

  for(Point pt2 : my_vect)
   ofs << pt2.x << ' ' << pt2.y << endl;
}
