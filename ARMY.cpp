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
      int n,m;
      cin>>n>>m;
      int a[n],b[m];
      for(int i=0;i<n;i++)
      cin>>a[i];
      for(int i=0;i<m;i++)
      cin>>b[i];
      int ma,mb;
      ma = *max_element(a,a+n);
      mb = *max_element(b,b+m);
      if(ma>=mb)
      cout<<"Godzilla"<<endl;
      else
      cout<<"MechaGodzilla"<<endl;
    }
    return 0;
}
