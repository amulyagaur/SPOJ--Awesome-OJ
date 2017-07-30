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
      long long n;
      cin>>n;
      cout<<(long long)pow(2,n-1)<<" "<<(long long)pow(2,n-2)*(n-1) + (long long)pow(2,n-1)<<endl;
    }
    return 0;
}
