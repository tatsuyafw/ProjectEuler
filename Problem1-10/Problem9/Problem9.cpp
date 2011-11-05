// Project Euler / Problem 9

#include <algorithm>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

typedef long long ll;

int main() {
  ll a, b, c;
  for (a = 1; a < 1000; ++a) {
	for (b = 1; b < 1000; ++b) {
	  c = 1000 - a - b;
	  if (a < b && b < c)
		if (c*c == a*a + b*b) {
		  cout << a << " " << b << " " << c << " " << endl;
		  cout << a*b*c << endl;
		  break;
		}
	}
  }


  return 0;
}

