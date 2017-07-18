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
    	long long a3,b3,s,a,d,n;
    	cin>>a3>>b3>>s;
    	n=(2*s)/(a3+b3);
    	d=(b3-a3)/(n-5);
    	a=a3-2*d;
    	cout<<n<<endl;
    	for(int i=1;i<=n;i++)
    	cout<<a+(i-1)*d<<" ";
    	cout<<endl;
    }
	return 0;
}
