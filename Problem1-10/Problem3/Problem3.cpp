// Project Euler / Problem 3

#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;

int main() {
  ll N = 600851475143LL;
  vector<ll> vec;

  for (ll i = 2; i * i <= N; ++i) {
    while (N % i == 0) {
      vec.push_back(i);
      N /= i;
    }
  }
  if (N != 1) vec.push_back(N);

  sort(vec.begin(), vec.end());
  ll res = vec.back();
  cout << res << endl;
  
  return 0;
}
