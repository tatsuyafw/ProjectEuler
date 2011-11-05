// Project Euler / Problem 5

#include <algorithm>
#include <iostream>
#include <map>
#include <vector>
using namespace std;

int main() {
  vector<int> prime;

  for (int i = 20; i >= 2; --i) {
	int n = i;
	map<int, int> tmp;
	for (int j = 2; j * j <= n; ++j) {
	  while (n % j == 0) {
		tmp[j]++;
		n /= j;
	  }
	}
	if (n != 1) tmp[n]++;
	for (map<int, int>::const_iterator it = tmp.begin();
		 it != tmp.end(); ++it) {
	  int n = it->first;
	  int m = it->second;
	  int c = count(prime.begin(), prime.end(), n);
	  if (c < m) {
		while (c != m) {
		  prime.push_back(n);
		  c++;
		}
	  }
	}
  }
  long long product = 1;
  for (int i = 0; i < prime.size(); ++i) {
	product *= prime[i];
  }
  cout << product << endl;

  
  return 0;
}
