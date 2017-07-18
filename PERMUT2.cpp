#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    do
    {
      int n;
      cin>>n;
      vector<int> a(n+1),v(n+1);
      if(n==0)
      break;
      for(int i=1;i<=n;i++)
      {
          cin>>a[i];
          v[a[i]]=i;
      }
      if(v==a)
      cout<<"ambiguous"<<endl;
      else
      cout<<"not ambiguous"<<endl;
    }
    while(1);
    return 0;
}
