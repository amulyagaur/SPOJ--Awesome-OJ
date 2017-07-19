#include <algorithm>
#include <bitset>
#include <cctype>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <map>
#include <numeric>
#include <set>
#include <vector>

#define lld long long
#define llu unsigned long long

#define rep(i, x, y) for (i = x; i < y; i++)
#define rrep(i, x, y) for (i = x; i >= y; i--)
#define trv(y, x) for (typeof(x.begin()) y = x.begin(); y != x.end(); y++)

using namespace std;

vector<int> Primes_list;
vector<bool> Prime;
void PrimeSieve(int n) {
  vector<bool> IsPrime(n + 1, true);
  IsPrime[0] = IsPrime[1] = false;
  for (int i = 2; i * i <= n; i++)
    if (IsPrime[i])
      for (int j = i * i; j <= n; j += i)
        IsPrime[j] = false;
  for (int i = 2; i <= n; i++)
    if (IsPrime[i])
      Primes_list.push_back(i);
}

void SegmentedPrimeSieve(int m, int n) {
  Prime.clear();
  Prime = vector<bool>(n - m + 1, true);
  int i, j;
  for (i = 0; (Primes_list[i] * Primes_list[i]) <= n && i < Primes_list.size();
       i++) {
    if (Primes_list[i] != 0)
      j = m / Primes_list[i];
    j *= Primes_list[i];
    for (; j <= n; j += Primes_list[i]) {
      if (j < m || j == Primes_list[i])
        continue;
      Prime[j - m] = false;
    }
  }
  for (i = 0; i < n - m + 1; i++)
    if (Prime[i] == true)
      cout << i + m << "\n";
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  PrimeSieve(ceil(sqrt(2147483647)));
  int t, m, n;
  cin >> t;
  while (t--) {
    cin >> m >> n;
    if (m == 1)
      m = 2;
    SegmentedPrimeSieve(m, n);
    
  }
  Primes_list.clear();
  return 0;
}
