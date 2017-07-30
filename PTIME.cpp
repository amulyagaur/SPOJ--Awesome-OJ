#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
long long int a[10001]={0};
vector<int> p;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(long long int i=2;i<=100;i++)
    {
    	for(long long int j=i*i;j<=10000;j+=i)
    		a[j]=1;
    }
    for(int i=2;i<=10000;i++)
    	if(a[i]==0)
    		p.push_back(i);
  	int n;
  	cin>>n;
  	map<int,int> m;
  	for(int i=0;p[i]<=n && i<p.size();i++)
  	{
  		int div=p[i],c=0;
  		while(div<=n)
  		{
  			c+= n/div;
  			div = div *p[i];
  		}
  		m[p[i]]=c;
  	}
  	map<int,int> :: iterator it;
  	for(it = m.begin();it!=m.end();)
  	{
  		cout<<it->first<<'^'<<it->second;
  		it++;
  		if(it!=m.end())
  			cout<<" * ";
  	}
    return 0;
}
