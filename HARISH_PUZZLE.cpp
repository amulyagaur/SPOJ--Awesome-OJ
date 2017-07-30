#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
bool check(vector<string> &v)
{
	int c=0;
	for(int i=0;i<8;i++)
	{
		for(int j=0;j<8;j++)
		{
			if(v[i][j]=='R')
			{
				c++;
				for(int x=0;x<8;x++)
				{
					if(v[x][j]=='R' && x!=i)
						return false;
					if(v[i][x]=='R' && x!=j)
						return false;
				}
			}
		}
	}
	if(c==8)
	return true;
	else
		return false;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
      vector<string> v(8);
      for(int i=0;i<8;i++)
      	cin>>v[i];
      if(check(v))
      	cout<<"YES"<<endl;
      else
      	cout<<"NO"<<endl;
    }
    return 0;
}
