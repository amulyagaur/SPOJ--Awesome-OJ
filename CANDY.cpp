#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    do
    {
    	int n,sum=0,count=0;
    	cin>>n;
    	if(n==-1)
    	break;
    	int a[n];
    	for(int i=0;i<n;i++)
    	{
    		cin>>a[i];
    		sum += a[i];
    	}
    	if(sum%n==0)
    	{
    		int avg = sum/n;
    		for(int i=0;i<n;i++)
    		{
    			if(a[i]<avg)
    			count+= abs(avg-a[i]);
    		}
    		cout<<count<<endl;
    	}
    	else
    	cout<<-1<<endl;
    }
    while(1);
	return 0;
}
