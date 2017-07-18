#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
    	int n,s=0,k=5;
    	cin>>n;
    	while((n/k)>0)
    	{
    		s+= n/k;
    		k=k*5;
    	}
    	cout<<s<<endl;
    }
	return 0;
}
