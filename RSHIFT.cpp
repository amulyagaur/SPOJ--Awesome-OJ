#include <stdio.h>
int main()
{
	int t;
	unsigned long long d;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%llu",&d);
		printf("%llu\n",d>>1);
	}
	return 0;
}
