#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int a[1000001]={0};
int arr[1000001]={0};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    for(int i=2;i<=sqrt(1000000);i++)
    {
        for(int j=i*i;j<=1000000;j+=i)
        arr[j]=1;
    }
for(int i=0;i<=1000000;i++)
    a[i]=i;
    for(int i=2;i<=1000000;i++)
    {
        if(arr[i]==0)
        {
        for(int j=i;j<=1000000;j+=i)
        {
            a[j]=a[j]-a[j]/i;   
        }
        }
    }
    int t;
    cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
      cout<<a[n]<<endl;
    }
    return 0;
}
