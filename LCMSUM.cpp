#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
long long int a[1000001]={0};
  long long int arr[1000001]={0};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(long long int i=0;i<=1000000;i++)
    a[i]=i;
    for(long long int i=2;i<=1000000;i++)
    {
        if(a[i]==i)
        {

        for(long long int j=i;j<=1000000;j+=i)
        {
            a[j]=a[j]-a[j]/i;   
        }

        }
    }
    for(int i=1;i<=1000000;i++)
    {
    	for(int j=i;j<=1000000;j+=i)
    		arr[j] += i*(a[i]);
    }
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      long long res = (n*(1+arr[n]))/2;
      cout<<res<<endl;
    }
    return 0;
}
