//given task: find out the number of divisors to numbers upto 10^9 in [a,b] where (b-a)<=10000000 ie. We are allowed to create an array
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int a[1000001]={0};
vector< vector<int> > v(11);
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    a[1]=0;
    for(int i=2;i<=1000000;i++)
    {
        if(a[i]==0)
        {
            for(int j=i;j<=1000000;j+=i)
                a[j]++;
        }
    }
    for(int i=1;i<=1000000;i++)
    {
        if(a[i]<=10)
            v[a[i]].push_back(i);
    }
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,n;
        cin>>a>>b>>n;
        cout<<upper_bound(v[n].begin(),v[n].end(),b)-lower_bound(v[n].begin(),v[n].end(),a)<<endl;
    }
    return 0;
}
