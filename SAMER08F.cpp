#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    do{
    	int n;
    	cin>>n;
    	if(n==0)
    	break;
    	cout<<(n*(n+1)*(2*n+1))/6<<endl;
    }
    while(1);
	return 0;
}
