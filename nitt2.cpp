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
      string x;
      cin>>x;
      int res1=0,res2=0;
      for(int i=0;i<x.size();i++)
      {
      	res1 = (res1*10 + x[i]-48)%252;
      }
      for(int i=0;i<x.size();i++)
      {
      	res2 = (res2*10 + x[i]-48)%525;
      }
      if(res1==0)
      	cout<<"Yes ";
      else
      	cout<<"No ";
      if(res2==0)
      	cout<<"Yes ";
      else
      	cout<<"No ";
      cout<<endl;
    }
    return 0;
}
