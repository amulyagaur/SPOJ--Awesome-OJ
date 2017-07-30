#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    while(1)
    {
    long long n,ar,max_ar=0,i;
    cin>>n;
    if(n==0)
    	break;
    long long a[n];
    for(long long i=0;i<n;i++)
    	cin>>a[i];
    stack<long long> s;
    i=0;
    for(i=0;i<n;)
    {
    	if(s.empty() || a[i]>=a[s.top()])
    	{
    		s.push(i);
    		i++;
    	}
    	else
    	{
    		long long tp = a[s.top()];
    		s.pop();
    		ar = tp *(s.empty() ? i:i-s.top()-1);
    		max_ar = max(max_ar,ar);
    	}
    }
    while(s.size()!=0)
    {
    	long long tp = a[s.top()];
    		s.pop();
    		ar = tp *(s.empty() ? i:i-s.top()-1);
    		max_ar = max(max_ar,ar);
    }
    cout<<max_ar<<endl;
}
    return 0;
}
