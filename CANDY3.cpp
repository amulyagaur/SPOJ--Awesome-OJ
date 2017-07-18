#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    unsigned long long t;
    cin>>t;
    for(unsigned long long z=1;z<=t;z++)
    {
      unsigned long long n,sum=0;
      cin>>n;
      unsigned long long a[n];
      for(unsigned long long i=0;i<n;i++)
      {
        cin>>a[i];
        sum+=(a[i]%n);
      }
      if(sum%n==0)
      cout<<"YES"<<endl;
      else
      cout<<"NO"<<endl;
    }
    return 0;
}
