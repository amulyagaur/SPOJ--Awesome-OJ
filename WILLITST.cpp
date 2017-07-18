#include <iostream>
using namespace std;

int main() {
	// your code goes her
	long long n;
	cin>>n;
	if((n&(n-1))==0)
	cout<<"TAK";
	else
	cout<<"NIE";
	return 0;
}
