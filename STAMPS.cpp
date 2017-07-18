#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int z=1;z<=t;z++)
    {
    	long long s,n,i,sum=0,c=0;
    	cin>>s>>n;
    	long long a[n];
    	for(i=0;i<n;i++)
    	cin>>a[i];
    	sort(a,a+n);
		for(i=(n-1);i>=0;i--)
		{
			sum=sum+a[i];
			c++;
			if(sum>=s)
			{
				cout<<"Scenario #"<<z<<":"<<endl<<c<<endl<<endl;
				break;
			}
		}
		if(i==-1)
		cout<<"Scenario #"<<z<<":"<<endl<<"impossible"<<endl<<endl;
		
    }
	return 0;
}
