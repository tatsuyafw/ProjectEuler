// Project Euler / Problem 4
#include <algorithm>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

int main () {
  int MAX = 0;

  for (int i = 0; i < 1000; ++i) {
	for (int j = 0; j < 1000; ++j) {
	  int product = i * j;
	  stringstream sin;
	  sin << product;
	  string str = sin.str(), rStr = sin.str();
	  reverse(rStr.begin(), rStr.end());
	  // cout << str << " " << rStr << endl; 
	  if (str == rStr) {
		MAX = max(MAX, product);
	  }
	}
  }
  cout << MAX << endl;
  
  return 0;
}
