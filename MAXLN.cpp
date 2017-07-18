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
    	double r,res;
    	cin>>r;
    	res = 4*r*r + 0.25;
    //	cout<<"Case "<<z<<": ";
    	printf("Case %d: %.2lf\n",z,res);
    }
	return 0;
}
