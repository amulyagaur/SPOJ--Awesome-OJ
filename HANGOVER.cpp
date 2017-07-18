#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    do
    {
    	double r,s=0;
    	cin>>r;
    	if(r==0.00)
    	break;
    	int c=0;
    	for(double i=1;;i++)
    	{
    		
    		if(s<r)
    		{
    			s+= 1/(i+1);
    		c++;
    		}
    		if(s>=r)
    		{
    			cout<<c<<" card(s)"<<endl;
    			break;
    		}
    	}
    }
    while(1);
	return 0;
}
