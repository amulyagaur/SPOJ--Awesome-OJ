#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    scanf("%d",&n);
    for(int z=1;z<=n;z++)
    {
      int x,y;
      scanf("%d %d",&x,&y);
      if(x==y)
      {
        cout<<2*x-(x%2)<<endl;
      }
      else
      if((y+2)==x)
      {
        cout<<(x+y-x%2)<<endl;
      }
      else
      cout<<"No Number"<<endl;
    }
    return 0;
}
