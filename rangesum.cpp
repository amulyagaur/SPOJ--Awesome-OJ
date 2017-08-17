#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    long long a[n+1];
    for(int i=1;i<=n;i++)
    	cin>>a[i];
    vector<long long> v1(n+1),v2;
    v2.push_back(0);
    v1[0]=0;
    for(int i=1;i<=n;i++)
    	v1[i]=v1[i-1]+a[n-i+1];
    int s=n,es=0;
    int q;
    cin>>q;
    while(q--)
    {
    	int d;
    	cin>>d;
    	if(d==2)
    	{
    		long long x;
    		cin>>x;
    		v2.push_back(v2[es]+x);
    		es++;
    		s++;
    	}
    	else
    		if(d==1)
    		{
    			long long l,r,nl,nr,ma,mi,el,er;
    			cin>>l>>r;
    			nl = s-l+1;
    			nr = s-r+1;
    			if(nl>=nr)
    			{
    				ma = nl;
    				mi = nr;
    				mi--;
    			}
    			else
    			{
    				ma = nr;
    				mi = nl;
    				mi--;
    			}
    			if(ma>n)
    			{
    				er = ma-n;
    				ma =n;
    			}
    			else
    				er = 0;
    			if(mi>n)
    			{
    				el = mi-n;
    				mi =n;
    			}
    			else
    				el = 0;
    			cout<<v1[ma]+v2[er]-v1[mi]-v2[el]<<endl;
    		}
    }
    return 0;
}
