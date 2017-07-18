#include <iostream>
using namespace std;
long rev(long x)
{
	int i,r=0;
	for(i=x;i>0;i=i/10)
	r = r*10 + i%10;
	return r;
}

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		long a,b,s;
		cin>>a>>b;
		s = rev(a)+rev(b);
		cout<<rev(s)<<endl;
	}
	return 0;
}
