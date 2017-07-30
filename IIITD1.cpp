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
      long long n,res=0,n1;
      cin>>n;
      n1= abs(n);
      string x = to_string(n1);
      if(x[0]!='9')
      {
      	x[0]++;
      	res = abs(n- stoll(x));
      	cout<<res<<endl;
      }	
      else
      {
      	//x[0]=0;
      	string y ="10";
      	for(int i=1;i<x.size();i++)
      		y.push_back(x[i]);
      	//x.insert(0,"1");
      	res =abs( n- stoll(y));
      	cout<<res<<endl;
      }
      	

    }
    return 0;
}
