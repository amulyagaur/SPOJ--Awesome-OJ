#include <bits/stdc++.h>
using namespace std;
int lcs(string &x,string &y)
{
	int m=x.length(),n = y.length(),lcs_size;
	int a[m+1][n+1];
	for(int i=0;i<=m;i++)
	{
		for(int j=0;j<=n;j++)
		{
			if(i==0 || j==0)
			a[i][j]=0;
			else
			if(x[i-1]==y[j-1])
			a[i][j]=1+a[i-1][j-1];
			else
			a[i][j]=max(a[i-1][j],a[i][j-1]);
		}
	}
	return a[m][n];
}
int main()
{
	int n;
	cin>>n;
	string x;
	cin>>x;
	string y =x;
	reverse(y.begin(),y.end());
	cout<<n-lcs(x,y);
	return 0;
}
