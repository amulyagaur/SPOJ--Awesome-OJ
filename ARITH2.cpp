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
    	long long i;
    	cin>>i;
    	do
    	{
    		char c;
    		cin>>c;
    		if(c=='=')
    		{
    			cout<<i<<endl;
    			break;
    		}
    		else
    		{
    			long long d;
    			cin>>d;
    			if(c=='+')
    			i = i+d;
    			else
    			if(c=='-')
    			i = i-d;
    			else
    			if(c=='/')
    			i=i/d;
    			else
    			if(c=='*')
    			i = i*d;
    		}
    	}
    	while(1);
    }
	return 0;
}
