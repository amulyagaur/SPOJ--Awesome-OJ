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
      int n,i;
      cin>>n;
      vector<string> v(n);
      for(i=0;i<n;i++)
      cin>>v[i];
      sort(v.begin(),v.end());
      for(i=0;i<(n-1);i++)
      {
        if(v[i+1].find(v[i]) != std::string::npos)
        {
          cout<<"NO"<<endl;
          break;
        }
      }
      if(i==(n-1))
      cout<<"YES"<<endl;
    }
    return 0;
}
