#include <bits/stdc++.h>
using namespace std;
int main()
{
	do
	{
	
	int n;
	cin>>n;
	if(n==0)
	break;
	string x;
	cin>>x;
	for(int i=0;i<n;i++)
	{
		int c = 2*n-1-2*i;
		for(int j=i;j<x.size();j+=2*n)
		{
			cout<<x[j];
			if((j+c)<x.size())
			cout<<x[j+c];
		}
		
	}
	cout<<endl;
}
while(1);
	return 0;
}
