#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    scanf("%d",&t);
    long long res=0;
    for(int z=1;z<=t;z++)
    {
      long long d;
      scanf("%lld",&d);
      res = res^d;
    }
    cout<<res;
    return 0;
}
