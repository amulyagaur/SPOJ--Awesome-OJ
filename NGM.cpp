#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long n;
    cin>>n;
    if(n%10==0)
    cout<<2<<endl;
    else
    cout<<1<<endl<<n%10<<endl;
    return 0;
}
