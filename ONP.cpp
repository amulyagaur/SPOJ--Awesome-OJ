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
      string x;
      cin>>x;
      stack<char> s;
      for(int i=0;i<x.size();i++)
      {
        if(x[i]=='(')
        continue;
        else
        if(x[i]==')')
        {
          cout<<s.top();
          s.pop();
        }
        else
        if(x[i]>='a' && x[i]<='z')
        cout<<x[i];
        else
        s.push(x[i]);
        
        
      }
      cout<<endl;
    }
    return 0;
}
