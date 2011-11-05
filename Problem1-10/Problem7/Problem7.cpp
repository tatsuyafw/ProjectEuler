// Project Euler / Problem 7

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

bool isPrime(int n) {
  for (int i = 2; i * i <= n; ++i) {
	if (n % i == 0) return false;
  }
  return true;
}

int main() {
  ll count = 0, i = 1;

  while (count < 10001) {
	i++;
	if (isPrime(i)) {
	  count++;
	  cout << count << endl;
	}
  }
  cout << i << endl;
  
  return 0;
}

