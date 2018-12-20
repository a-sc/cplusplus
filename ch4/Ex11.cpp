#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> primes = {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97};

bool isprime(int n){

  for (int x = 0; x < primes.size(); ++x){
    if (n == primes[x])
      return true;
  }
  return false;
}


int main() {

  vector<int> comparison;

  for (int i = 0; i <= 100; ++i) {
    if(isprime(i)){
      comparison.push_back(i);
    }
  }

  for (int x = 0; x < primes.size(); ++x){
    cout << primes[x] << " ";
  }

  cout << endl;

  for (int y = 0; y < comparison.size(); ++y){
    cout << comparison[y] << " ";
  }

  cout << endl;

  if (primes.size() != comparison.size()) {
    cout << "The vectors are not equal." << endl;
    return 0;
  }

  for (int o = 0; o < comparison.size(); ++o){
    if (comparison[o] != primes[o]){
      cout << "The vectors are not equal." << endl;
      return 0;
    }
  }

  cout << "The vectors are equal." << endl;

  return 0;
}
