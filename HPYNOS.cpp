#include <bits/stdc++.h>
using namespace std;

int f(int n)
{
	int sum=0;
	string y = to_string(n);
	for(int i=0;i<y.size();i++)
	sum += (y[i]-48)*(y[i]-48);
	return sum;
}
int main() {
	// your code goes here
	int n,c=0;
	cin>>n;
	int res =n;
	set<int> s;
	while(1)
	{
		res = f(res);
		c++;
		if(res==1)
		{
			cout<<c<<endl;
			break;
		}
		else
		{
			if(s.empty()|| s.find(res)==s.end())
			s.insert(res);
			else
			{
				cout<<-1;
				break;
			}
			
		}
	}
	return 0;
}
