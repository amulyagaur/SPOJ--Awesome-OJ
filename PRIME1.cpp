#include <iostream>
using namespace std;
#include <cmath>
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	// your code goes here
	int t;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
		long long n,m,k,g;
		cin>>n>>m;
		for(k=n;k<=m;k++)
		{
			for(g=2;g<=sqrt(k);g++)
			{
				if(k%g==0)
				break;
			}
			if(g>sqrt(k) && k!=1)
			cout<<k<<endl;
		}
		cout<<"\n";
	}
	
	return 0;
}
