// Project Euler / Problem 2

#include <iostream>
using namespace std;

#define N 4000000

typedef long long ll;
ll Array[2] = {1, 2};

ll fib() {
  ll res = 0;
  res = Array[0] + Array[1];
  Array[0] = Array[1]; Array[1] = res;

  return res;
}

int main() {
  ll sum = 2;
  while (true) {
    ll n = fib();
    if (n > N) break;
    if (n % 2 == 0) {
      sum += n;
    }
  }
  cout << sum << endl;
  
  return 0;
}
