#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    	do{
		int g,b;
		cin>>g>>b;
		if(g==-1 && b==-1)
		break;
		if(b==0 && g!=0)
		cout<<g<<endl;
		else
		if(g==0 && b!=0)
		cout<<b<<endl;
		else
		if(b==0 && g==0)
		cout<<0<<endl;
		else
		cout<<ceil(((double)max(g,b)/((double)min(g,b)+1)))<<endl;
	}
	while(1);
	return 0;
}
