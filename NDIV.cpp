//given task: find out the number of divisors to numbers upto 10^9 in [a,b] where (b-a)<=10000000 ie. We are allowed to create an array
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
      int a,b,n;
      cin>>a>>b>>n;
      int arr[b-a+1];
      memset(arr,0,sizeof(arr));
      for(int i=1;i<=sqrt(b);i++)
      {
      	int first_div_by_i = ((a-1)/i+1)*i,sq=i*i,j;
      	for(j=first_div_by_i;j<=b;j+=i)
      	{
      		if(j<sq)
      			continue;
      		else
      			if(j==sq)
      				arr[j-a]++;
      			else
      				arr[j-a]+=2;
      	}
      }
      int c=0;
      for(int j=a;j<=b;j++)
      	{
      	    //cout<<j<<" "<<arr[j-a]<<endl;
      		if(arr[j-a]==n)
      			c++;
      	}
      	cout<<c<<endl;
    
    return 0;
}
