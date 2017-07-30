#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i,j,n;
    cin>>t;cin.ignore( std::numeric_limits<std::streamsize>::max(), '\n') ;
    while(t--){
      int ef=0,c=0,c1=0;
        string s,x;
        getline(cin,s);
        for(int i=0;i<s.size();i++)
        if(s[i]==' ')
        c++;
        if(c==s.size())
        cout<<0<<endl;
        else
        {
        vector<string> v;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!=' ')
                x.push_back(s[i]);
            else
            {
            	if(x.size()!=0)
            	{
            		 v.push_back(x);
                x.clear();
            	}
               
            }
        }
        for(int i=0;i<x.size();i++)
        if(x[i]==' ')
        c1++;
        if(c1!=x.size())
        v.push_back(x);
        set<string> se;
        for(int i=0;i<v.size();i++)
        {
          //reverse(v[i].begin(),v[i].end());
          se.insert(v[i]);
        }
        cout<<se.size()<<endl;
        se.clear(); 
        }
    }
    return 0;
} 
