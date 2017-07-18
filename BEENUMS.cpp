#include <bits/stdc++.h>
using namespace std;

long long f(long long n)
{
	long long r= 3*n*n-3*n+1;
	return r;
}	

int b_search(long long l,long long r,long long k)
{
	if(l<=r)
	{
		long long mid = l + (r-l)/2;
		if(f(mid)==k)
		return 1;
		else
		if(f(mid)>k)
		return b_search(l,mid-1,k);
		else
		if(f(mid)<k)
		return b_search(mid+1,r,k);
	}
	else
	return -1;
}

int main() {
	// your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long k;
    do{
    	cin>>k;
    	if(k==-1)
    	break;
    	if(b_search(1,100000,k)==1)
    	cout<<"Y"<<endl;
    	else
    	cout<<"N"<<endl;
    }
    while(1);
	return 0;
}
