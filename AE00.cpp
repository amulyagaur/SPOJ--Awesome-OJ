#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,s=0;
    cin>>n;
    for(long long i=1;(i*i)<=n;i++)
    s+= (n-i*i+i)/i;
    cout<<s;
	return 0;
}
