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
      int a[10000],i,j,n,carry=0,m=1;
      a[0]=1;
      cin>>n;
      for(int i=1;i<=n;i++)
      {
      	for(int j=0;j<m;j++)
      	{
      		int num = a[j]*i +carry;
      		carry = num/10;
      		a[j]=num%10;
      	}
      	while(carry>0)
      	{
      		a[m]=carry%10;
      		carry = carry/10;
      		m++;
      	}
      }
      for(int k=m-1;k>=0;k--)
      	cout<<a[k];
      cout<<endl;
    }
    return 0;
}
