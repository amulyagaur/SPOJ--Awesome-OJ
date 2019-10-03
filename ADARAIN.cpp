#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long int n,m,w;
    cin>>n>>m>>w;
    long long int dp[w+1];
    for(long long int i=0;i<=w;i++)
    	dp[i]=0;
    for(long long int i=0;i<n;i++)
    {
    	long long int l,r;
    	cin>>l>>r;
    	dp[l]++;
    	dp[r+1]--;
    }
    for(long long int i=1;i<=w;i++)
    	dp[i]+=dp[i-1];
    while(m--)
    {
    	long long int x;
    	cin>>x;
    	cout<<dp[x]<<endl;
    }
    return 0;
}
