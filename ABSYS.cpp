#include <bits/stdc++.h>
using namespace std;

long long num(string x)
{
	long long c=0,s=0;
	for(int i=x.size()-1;i>=0;i--)
	{
		s+= (x[i]-48)*pow(10,c);
		c++;
	}
	return s;
}
int main() {
	// your code goes here
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    for(int z=1;z<=t;z++)
    {
    	string s1,s2,s3,c1,c2;
    	cin>>s1>>c1>>s2>>c2>>s3;
    	if (s1.find("machula") != std::string::npos)
    	s1 = to_string(num(s3)-num(s2));
    	else
    	if (s2.find("machula") != std::string::npos)
    	s2 = to_string(num(s3)-num(s1));
    	else
    	if (s3.find("machula") != std::string::npos)
    	s3 = to_string(num(s1)+num(s2));
    	cout<<s1<<" "<<c1<<" "<<s2<<" "<<c2<<" "<<s3<<endl;	
    }
	return 0;
}
