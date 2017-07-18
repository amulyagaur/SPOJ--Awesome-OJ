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
      string a;
      unsigned long long p,b;
      cin>>a>>b;
      if(b%4==0 && b!=0)
      p = pow((a[a.size()-1]-48),4);
      else
      p=pow((a[a.size()-1]-48),b%4);
      cout<<p%10<<endl;
    }
    return 0;
}
