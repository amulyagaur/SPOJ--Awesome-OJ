#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int z=1;z<=t;z++)
    {
      long long n;
      cin>>n;
      for(long long x=n/2;x>=1;x--)
      {
        if(__gcd(n,x)==1)
        {
          cout<<x<<endl;
          break;
        }
      }
      
    }
    return 0;
}
