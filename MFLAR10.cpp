#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    while(1)
    {
      int i;
      getline(cin,s);
      if(s=="*")
      break;
      std::transform(s.begin(), s.end(), s.begin(), ::tolower);
      char x=s[0];
      for(i=1;i<s.size();i++)
      {
        if(s[i]==' ' && s[i+1]!=x)
        {
          cout<<'N'<<endl;
          break;
        }
      }
      if(i==s.size())
      cout<<'Y'<<endl;
    }
    return 0;
}
