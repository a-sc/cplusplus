#include <vector>
#include <string>

class Name_pairs {
public:
  void read_names();
  void read_ages();
  void print();
  void sort();
private:
  std::vector<double> ages;
  std::vector<std::string> names;
  double age;
  std::string name;
};
