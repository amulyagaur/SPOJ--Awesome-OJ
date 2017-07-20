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
    	int n,c=0;
    	cin>>n;
    	string x;
    	cin>>x;
    	int a[8]={0};
    	for(int i=0;i<=(x.size()-3);i++)
    	{
    		string y = x.substr(i,3);
    		if(y=="TTT")
    		a[0]++;
    		else
    		if(y=="TTH")
    		a[1]++;
    		else
    		if(y=="THT")
    		a[2]++;
    		else
    		if(y=="THH")
    		a[3]++;
    		else
    		if(y=="HTT")
    		a[4]++;
    		else
    		if(y=="HTH")
    		a[5]++;
    		else
    		if(y=="HHT")
    		a[6]++;
    		else
    		if(y=="HHH")
    		a[7]++;
    		
    	}
    	cout<<n<<" ";
    	for(int i=0;i<8;i++)
    	cout<<a[i]<<" ";
    	cout<<endl;
    }
	return 0;
}
