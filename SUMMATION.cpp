#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define ull long long
#define MODULO 100000007
ull PowMod(ull n)
{
    ull ret = 1;
    ull a = 2;
    while (n > 0) {
        if (n & 1) ret = ret * a % MODULO;
        a = a * a % MODULO;
        n >>= 1;
    }
    return ret;
}
int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t;
    cin>>t;
    for(int z=1;z<=t;z++)
    {
      long long n,sum=0,res;
      cin>>n;
      long long a[n];
      for(int i=0;i<n;i++)
      {
      	cin>>a[i];
      	sum = (sum%100000007+a[i]%100000007)%100000007;
      }
      res=(sum%100000007*PowMod(n-1)%100000007)%100000007;
      printf("Case %d: %lld\n",z,(long long)res);
    }
    return 0;
}
