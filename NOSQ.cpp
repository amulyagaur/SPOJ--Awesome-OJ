#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
long long int a[100001]={0};
vector< vector<long long int> > v(10);
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=2;i<=sqrt((double)100000);i++)
    {
    	for(int j=i*i;j<=100000;j+=i*i)
    		a[j]=1;
    }
    for(int i=1;i<=100000;i++)
    {
    	if(a[i]==0)
    	{
    		int num = i;
    		bool arr[10]={false};
    		while(num>0)
    		{

    			int dig=num%10;
    			if(arr[dig]==false)
    			{
    				v[dig].push_back(i);
    				arr[dig]=true;
    			}
    			num=num/10;
    		}
    	}
    }
    
    
    int t;
    cin>>t;
    while(t--)
    {
    	int aa,b,d,c=0;
    	cin>>aa>>b>>d;
    	cout<<upper_bound(v[d].begin(),v[d].end(),b)-lower_bound(v[d].begin(),v[d].end(),aa)<<endl;
    }
    
    return 0;
}
