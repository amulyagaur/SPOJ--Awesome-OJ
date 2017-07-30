#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int knapsack(int wt[],int v[],int w,int n)
{
	int a[n+1][w+1];
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=w;j++)
		{
			if(i==0 || j==0)
			a[i][j]=0;
			else
			if(wt[i-1]<=j)
			{
				a[i][j]=max(a[i-1][j],(v[i-1]+a[i-1][j-wt[i-1]]));
			}
			else
			a[i][j]=a[i-1][j];
		}
	}
	int maxfun = a[n][w];

	cout<<"Hey stupid robber, you can get "<<maxfun<<'.'<<endl;
	
}
int main()
{
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
   int t;
   cin>>t;
   while(t--)
	{
	
	int n,w;
	cin>>w>>n;
	if(w==0 && n==0)
	break;
	int v[n],wt[n];
	for(int i=0;i<n;i++)
	{
		int x,y;
		cin>>x>>y;
		wt[i]=x;
		v[i]=y;
	}
	
	
	knapsack(wt,v,w,n);
}
	return 0;
}
