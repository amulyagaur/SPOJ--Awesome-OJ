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
    	long long n,m,res,max_res=-1,ini=0,l,max_l=-1;
    cin>>n>>m;
    long long a[n];
    //a[0]=0;
    for(int i=0;i<n;i++)
    	cin>>a[i];
    for(int i=1;i<n;i++)
    	a[i]+=a[i-1];
    
    for(int i=0;i<n;i++)
    {
    	l = lower_bound(a+i,a+n,m+ini)-(a+i);
    	res = a[lower_bound(a+i,a+n,m+ini)-a-1]-ini;
    	//cout<<res<<endl;
    	if((l>max_l) || (l==max_l && res<max_res))
    	{
    		max_res = res;
    		max_l =l;
    	}
    	ini =a[i];
    }
    cout<<(long long)max_res<<" "<<(long long)max_l<<endl;
    }
    return 0;
}
