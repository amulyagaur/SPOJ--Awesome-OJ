#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
bool is_palin(int n)
{
	string x = to_string(n);
	string y=x;
	reverse(y.begin(),y.end());
	if(y==x)
		return true;
	return false;
}
int pro(int n)
{
	int p=1;
	while(n)
	{
		if(n%10!=0)
		p = p*(n%10);
		n= n/10;
	}
	return p;
}
int a[1000001]={0};
vector<int> primes;
vector<int> p_primes;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    primes.push_back(0);
    p_primes.push_back(0);
    for(int i=2;i<=1000;i++)
    {
    	if(a[i]==0)
    	{
    		for(int j=i*i;j<=1000000;j+=i)
    			a[j]=1;
    	}
    }
    for(int i=2;i<=1000000;i++)
    {
    	if(a[i]==0)
    	{
    		primes.push_back(i);
    		if(is_palin(i))
    			p_primes.push_back(i);
    	}
    }
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
    	cin>>n;
    	cout<<(int)p_primes[n]<<" "<<(int)primes[pro(p_primes[n])]<<endl;
    }
    return 0;
}
