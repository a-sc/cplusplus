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

  for(Point pt; ifs>>pt;) {
    my_vect.push_back(pt);
  }

  for(Point pt2 : my_vect)
   cout << pt2.x << ' ' << pt2.y << endl;
}
