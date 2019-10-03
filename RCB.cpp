#include <bits/stdc++.h>
using namespace std;
long long a[200005],n,k;
int main()
{
    cin>>n>>k;
    while(k--)
    {
        int l,r;
        cin>>l>>r;
        a[l]++;
        a[r+1]--;
    }
    long long mx=a[1];
    for(int i=2;i<=n;i++)
    {
        a[i]+=a[i-1];
        mx=max(mx,a[i]);
    }
    cout<<mx<<endl;
    for(int i=1;i<=n;i++)
    if(a[i]==mx)
    cout<<i<<" ";
    cout<<endl;
    return 0;
}