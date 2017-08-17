#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    	cin>>a[i];
    vector<int> v1,v2;
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<n;j++)
    	{
    		for(int k=0;k<n;k++)
    			v1.push_back(a[i]*a[j]+a[k]);
    	}
    }
    for(int i=0;i<n;i++)
    {
    	for(int j=0;j<n;j++)
    	{
    		for(int k=0;k<n;k++)
    			if(a[i]!=0)
    			v2.push_back(a[i]*(a[j]+a[k]));
    	}
    }
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    long long ans=0;
    for(int i=0;i<v1.size();i++)
    {
    	//int c1 = upper_bound(v1.begin(),v1.end(),v1[i])-lower_bound(v1.begin(),v1.end(),v1[i]);
    	int c2 = upper_bound(v2.begin(),v2.end(),v1[i])-lower_bound(v2.begin(),v2.end(),v1[i]);
    	ans+= (c2);
    }
    cout<<ans<<endl;
    return 0;
}