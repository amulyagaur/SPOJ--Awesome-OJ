#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    do
    {
    	double l,res;
    	cin>>l;
    	if(l==0)
    	break;
    	res =  (l*l)/(2* 3.14159);
    	printf("%.2lf\n",res);
    }
    while(1);
	return 0;
}
