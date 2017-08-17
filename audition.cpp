#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
      long long n,k;
      cin>>n>>k;
      string x;
      cin>>x;
      long long a[n],ans=0;
      if(x[0]=='1')
      	a[0]=1;
      else
      	a[0]=0;
      for(int i=1;i<n;i++)
      	a[i]= a[i-1]+ x[i]-48;
      for(int i=0;i<n;i++)
      {
      	if(x[i]=='1')
      		ans += upper_bound(a+i,a+n,a[i]+k-1)-lower_bound(a+i,a+n,a[i]+k-1);
      	else
      		ans+= upper_bound(a+i,a+n,a[i]+k)-lower_bound(a+i,a+n,a[i]+k);
      }
      cout<<(long long)ans<<endl;
    }
    return 0;
}
