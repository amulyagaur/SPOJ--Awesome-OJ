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
      int n,u;
      cin>>n>>u;
      vector<int> v(n+1);
      while(u--)
      {
        int l,r,val;
        cin>>l>>r>>val;
        v[l]+=val;
        v[r+1]-=val;
      }
      int a[n];
      a[0]=v[0];
      for(int i=1;i<n;i++)
      a[i]= v[i]+a[i-1];
      
      int q;
      cin>>q;
      while(q--)
      {
        int d;
        cin>>d;
        cout<<a[d]<<endl;
      }
    }
    return 0;
}
