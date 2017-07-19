#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
bool all9(string &x)
{
	for(int i=0;i<x.size();i++)
		if(x[i]!='9')
			return false;
	return true;	
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
      string x;
      cin>>x;
      if(all9(x))
      {
      	string ans =x;
      	ans[0]='1';
      	for(int i=1;i<x.size();i++)
      		ans[i]='0';
      	ans.push_back('1');
      	cout<<ans<<endl;
      }
      else
      {
      	int i=x.size()/2,j=i;
      	if(x.size()%2==0)
      		i=i-1;
      	while(i>=0 && x[i]==x[j])
      	{
      		i--;
      		j++;
      	}
      	if(i<0 || x[i]<x[j])
      	{
      		int i=x.size()/2,j=i,carry=1;
      	if(x.size()%2==0)
      		i=i-1;
      	while(i>=0)
      	{
      		int num = (x[i]-48)+carry;
      		x[i]=num%10 + 48;
      		carry = num/10;
      		x[j]=x[i];
      		i--;
      		j++;
      	}
      	}
      	else
      	{
      		while(i>=0)
      		{
      			x[j]=x[i];
      			i--;
      			j++;
      		}
      	}
      	cout<<x<<endl;
      }
    }
    return 0;
}
