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
      int k,n;
      cin>>k;
      int s;
      n= ceil((sqrt(1+8*k)-1)/2.0);
      s = k - (n*(n-1))/2;
     // cout<<n<<" "<<s<<endl;
      int nm,dm;
      if(n%2==0)
      {
        nm = s;
        dm = n-s+1;
      }
      else
      {
        nm = n-s+1;
        dm = s;
      }
      cout<<"TERM "<<(int)k<<" IS "<<nm<<'/'<<dm<<endl;
    }
    return 0;
}
