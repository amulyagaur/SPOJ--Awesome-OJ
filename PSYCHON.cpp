#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int a[10000000]={0};
int main()
{
    for(int i=2;i<=10000000;i++)
    {
        if(a[i]==0)
        {
            for(int j=i;j<=10000000;j+=i)
                if(a[j]==0)
                a[j]=i;
        }
    }
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n;
        scanf("%d",&n);
        unordered_map<int,int> m;
        while(n>1)
        {
            int fac = a[n];
            m[fac]++;
            n= n/fac;
        }
        int even=0,odd=0;
        unordered_map<int,int> :: iterator it = m.begin();
        while(it!=m.end())
        {
            if(it->second %2==0)
                even++;
            else
                odd++;
            it++;
        }
        if(even>odd)
            printf("Psycho Number\n");
        else
            printf("Ordinary Number\n");
    }
	return 0;
}
