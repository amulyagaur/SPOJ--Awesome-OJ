#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
bool f(string &x,string &y,int m)
{
	int arr[x.size()];
	for(int i=0;i<x.size();i++)
		arr[i]=0;
	for(int i=0,k=0;i<y.size();i++)
	{
		if(k<x.size() && arr[k]>=m)
			k++;
		if(y[i]==x[k])
			arr[k]++;
		if(k==x.size())
			return 1;
	}
	return 0;
}
int b_search(string &x,string &y)
{
	int low =0,high=y.size(),mid,res=-1;
	while(low<=high)
	{
		mid = low + (high-low)/2;
		if(f(x,y,mid))
		{
			res = mid;
			low = mid+1;
		}
		else
			high = mid-1;
	}
	return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--)
    {
      string x,y;
      cin>>x>>y;
      cout<<b_search(x,y)<<endl;
    }
    return 0;
}
