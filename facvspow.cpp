#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
double lo[3000005]={0.0};

int b_search(int a)
{
	int low =0,high = 3000000,mid,res;
	while(low<=high)
	{
		mid = low + (high-low)/2;
		if(lo[mid]>((double)mid*log(a)))
		{
			res = mid;
			high=mid-1;
		}
		else
			low = mid+1;
	}
	return res;
}

int main()
{
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    	int t;
   	scanf("%d",&t);
    lo[0]=lo[1]=0;
    for(int i=2;i<=3000003;i++)
    {
    	lo[i] = (double)(lo[i-1]+ (double)log(i));
    }
    
   
   	while(t--)
   	{
   		int  a;
   		scanf("%d",&a);
	
   		printf("%d\n",b_search(a));
   	}
   	
   	//printf("%lf\n",lo[2718274]);
    return 0;
}
