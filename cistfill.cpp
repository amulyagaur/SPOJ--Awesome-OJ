#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
bool func(double a[][4],int n,double l,double v)
{
	double tv=0;
	for(int i=0;i<n;i++)
	{
		if(l>=a[i][0])
		{
			if(l<=(a[i][0]+a[i][1]))
				tv+= a[i][2]*a[i][3]*(l-a[i][0]);
			else
				tv += (a[i][1]*a[i][2]*a[i][3]);
		}
	}
	if(tv<=v)
		return true;
	return false;
}
double b_search(double a[][4],int n,double v)
{
	double low=0,high=1e7,mid,res;
	while(low<=high && (high-low)>=1e-7)
	{
		mid = low + (high-low)/2;
		if(func(a,n,mid,v))
		{
			res = mid;
			low = mid;
		}
		else
			high = mid;
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
    	int n;
    	cin>>n;

      	double a[n][4],v,tv=0;
      	for(int i=0;i<n;i++)
      	{
      		tv += (a[i][1]*a[i][2]*a[i][3]);
      		cin>>a[i][0]>>a[i][1]>>a[i][2]>>a[i][3];
      	}
      	cin>>v;
      	if(tv<v)
      		cout<<"OVERFLOW"<<endl;
      	else
      	cout<<b_search(a,n,v)<<endl;
    }
    return 0;
}
