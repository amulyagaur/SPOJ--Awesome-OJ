#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int div[1000001]={0};
    int has[1000001]={0};
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
    	has[a[i]]++;
    }
    for(int i=1;i<=1000000;i++)
    {
    	for(int j=i;j<=1000000;j+=i)
    	{
    		div[j]+=has[i];
    	}
    }
    for(int i=0;i<n;i++)
    	cout<<div[a[i]]-1<<endl;
    return 0;
}
