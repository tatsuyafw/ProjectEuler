// Project Euler / Problem 10

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

#define N 2000000
typedef long long ll;
int prime[N];
bool is_prime[N+1];

int sieve(int n) {
  int p = 0;
  for (int i = 0; i <=n; i++) is_prime[i] = true;
  is_prime[0] = is_prime[1] = false;
  for (int i = 2; i <= n; i++) {
	// cout << i << endl;
	if (is_prime[i]) {
	  prime[p++] = i;
	  for (int j = 2 * i; j <= n; j += i) is_prime[j] = false;
	}
  }
  return p;
}

int main() {
  int n = sieve(N);
  ll sum = 0;
  for (int i = 0; i < n; ++i) {
	sum += prime[i];
  }
  cout << sum << endl;
  return 0;
}

