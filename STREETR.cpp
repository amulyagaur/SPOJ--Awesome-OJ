#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,c;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
    	if(i>0)
    	b[i]=a[i]-a[i-1];
    }
    int g= __gcd(b[1],b[2]);
    for(int i=3;i<n;i++)
    {
    	g = __gcd(b[i],g);
    }
    for(int i=1;i<n;i++)
    c+= ((b[i]/g)-1);
    cout<<c<<endl;
	return 0;
}
