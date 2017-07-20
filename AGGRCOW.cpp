#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int fc(int a[],int n,int c,int x)
{
	int prev = a[0],count=1;
	for(int i=1;i<n;i++)
	{
		if((a[i]-prev)>=x)
		{
			count++;
			if(count==c)
				return 1;
			prev = a[i];
		}
	}
	return 0;
}

int b_s(int a[],int n,int c)
{
	int low =0,high=a[n-1],mid,res=-1;
	while(low<=high)
	{
		mid = low + (high-low)/2;
		if(fc(a,n,c,mid)==1)
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
      int n,c;
      cin>>n>>c;
      int a[n];
      for(int i=0;i<n;i++)
      	cin>>a[i];
      sort(a,a+n);
      cout<<b_s(a,n,c)<<endl;
    }
    return 0;
}
