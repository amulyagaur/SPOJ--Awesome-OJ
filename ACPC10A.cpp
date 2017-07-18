#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long a1,a2,a3;
	do
	{
		cin>>a1>>a2>>a3;
		if(a1==0 && a2==0 && a3==0)
		break;
		else
		{
		
		if((a1+a3)==2*a2)
		cout<<"AP "<<a3+(a3-a2)<<endl;
		else
		if((a1*a3)==(a2*a2))
		cout<<"GP "<<a3*(a3/a2)<<endl;
	}
}
	while(1);
	return 0;
}
