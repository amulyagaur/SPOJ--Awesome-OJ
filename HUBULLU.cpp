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
    	int n,s;
    	cin>>n>>s;
    	if(s==0)
    	cout<<"Airborne wins."<<endl;
    	else
    	cout<<"Pagfloyd wins."<<endl;
    }
	return 0;
}
