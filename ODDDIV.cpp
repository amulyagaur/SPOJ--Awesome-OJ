#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
long long  a[100001]={0};
vector< std::vector<long long> >v(10000);
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(long long int i=2;i<=100000;i+=2)
    	a[i]=2;
    for(long long int i=3;i<=100000;i+=2)
    {
    	if(a[i]==0)
    	{
    		a[i]=i;
    		for(long long j=i*i;j<=100000;j+=i)
    		{
    			if(a[j]==0)
    				a[j]=i;
    		}
    	}
    }
    for(long long int i=2;i<=100000;i++)
    {
    	long long div = 1;
    	unordered_map<int,int> m;
    	int num = i;
    	while(num>1)
    	{
    		m[a[num]]++;
    		num = num/a[num];
    	}
    	unordered_map<int,int> :: iterator it;
    	for(it = m.begin();it!=m.end();it++)
    	{
    		div = div*(2*it->second+1);
    	}
    	v[div].push_back(i*i);
    }
    
    long long t;
    cin>>t;
    while(t--)
    {
    	int k;
    	long long low,high;
    	cin>>k>>low>>high;
    	cout<<upper_bound(v[k].begin(),v[k].end(),high)-lower_bound(v[k].begin(),v[k].end(),low)<<endl;
    }
    return 0;
}
