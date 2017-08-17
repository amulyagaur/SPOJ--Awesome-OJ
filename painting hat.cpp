#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define pi 3.1415926535897932384626433832795028841971693993751
double vol(double R,double H,double h)
{
	double r = (h*R)/H;
	return (pi*r*r*h)/3; 
}
double area(double R,double H,double h)
{
	double r = (h*R)/H,a;
	a = 2*pi*R*sqrt(R*R+H*H) - pi*r*sqrt(h*h+r*r);
	return a;
}
double b_search(double R,double H)
{
	double low =0,high=H,mid,res;
	while(low<=high && (high-low)>=1e-7)
	{
		mid = low+(high-low)/2;
		if(vol(R,H,mid)>=area(R,H,mid))
		{
			res=mid;
			high =mid;
		}
		else
			low = mid;
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
      double R,H,res;
      cin>>R>>H;
      if(vol(R,H,H)<area(R,H,H))
      	cout<<fixed<<setprecision(6)<<H<<endl;
      else
      {
      	res = b_search(R,H);
    
      	cout<<fixed<<setprecision(6)<<res<<endl;
      
      }
      
    }
    return 0;
}
