#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int t;
   	scanf("%d",&t);
    for(int z=1;z<=t;z++)
    {
      unsigned long long n,s1,i;
      scanf("%llu",&n);
      s1 = (n*(n+2)*(2*n+1))/8;
      
      printf("%llu\n",s1);
    }
    return 0;
}
