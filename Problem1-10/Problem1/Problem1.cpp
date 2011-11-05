// Project Euler / Problem 1
#include <numeric>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  vector<int> vec;

  for (int i = 0; i < 1000; ++i) {
    if (i % 3 == 0 || i % 5 == 0) {
      vec.push_back(i);
    }
  }
  cout << accumulate(vec.begin(), vec.end(), 0) << endl;
  
  return 0;
}

