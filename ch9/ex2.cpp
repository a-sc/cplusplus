#include "name_pairs.h"

int main(){
  Name_pairs a;
  a.read_names();
  a.read_ages();
  a.sort();
  a.print();
  return 0;
}
