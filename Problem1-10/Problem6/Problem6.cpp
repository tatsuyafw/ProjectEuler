// Project Euler / Problem 6

#include <iostream>
using namespace std;

typedef long long ll;

int main() {
  ll res = 0, fR = 0, sR = 0;
  
  for (int i = 1; i <= 100; ++i) {
	fR += i * i;
	sR += i;
  }
  sR *= sR;
  cout << sR - fR << endl;
  
  return 0;
}
