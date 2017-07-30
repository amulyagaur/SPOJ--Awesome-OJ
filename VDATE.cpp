#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
      long long x,y;
      cin>>x>>y;
      if(x==y)
      	cout<<-1<<endl;
      else
      	if(x<y)
      		cout<<0<<endl;
      	else
      	{
      		long long a = (x-y),i,c=0;
      		for(i =1 ;i*i<=(a);i++)
      		{
      			if(a%i==0)
      			{
      				if(x%i==y)
      					c++;
      				if(i != a/i)
      				{
      					long long f = a/i;
      					if(x%f==y)
      						c++;
      				}
      			}
      		}
      		cout<<c<<endl;
      	}
    }
    return 0;
}
