#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int a[1000001]={0};
vector< vector<int> > v(20);
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
for(int i=0;i<=1000000;i++)
    a[i]=i;
    for(int i=2;i<=1000000;i++)
    {
        if(a[i]==i)
        {

        for(int j=i;j<=1000000;j+=i)
        {
            a[j]=a[j]-a[j]/i;   
        }

        }
    }
    v[0].push_back(1);
    for (int i = 2; i <= 1000000; ++i)
    {
    	int c=1,phi=a[i];
    	while(phi!=1)
    	{
    		c++;
    		phi = a[phi];
    	}
    	if(c<20)
    		v[c].push_back(i);
    }
    int t;
    cin>>t;
    while(t--)
    {
    	int m,n,k;
    	cin>>m>>n>>k;
    	int res=upper_bound(v[k].begin(),v[k].end(),n)-lower_bound(v[k].begin(),v[k].end(),m);
    	cout<<res<<endl;
    }
    return 0;
}
