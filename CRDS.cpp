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
    	unsigned long long n,r;
    	cin>>n;
    	r=((3*n*n)+n)/2;
    	cout<<r%1000007<<endl;
    }
	return 0;
}
