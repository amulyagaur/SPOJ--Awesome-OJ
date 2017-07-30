#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    while(1)
    {
      int n;
      cin>>n;
      if(n==0)
      break;
      set<double> s;
      int inf =0;
      vector< pair<double,double> > v;
      for(int i=0;i<n;i++)
      {
        double x,y;
        cin>>x>>y;
        v.push_back(make_pair(x,y));
      }
      for(int i=0;i<n;i++)
      {
        for(int j=i+1;j<n;j++)
        {
          if(v[j].first==v[i].first)
          inf=1;
          else
          s.insert((v[j].second-v[i].second)/(v[j].first-v[i].first));
        }
      }
      cout<<s.size()+inf<<endl;
    }
    return 0;
}
