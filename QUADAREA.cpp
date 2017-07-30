#include <stdio.h>
#include<math.h>
int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	  double a,b,c,d,s,res;
	  scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
	  s = (a+b+c+d)/2.0;
	  res = sqrt((s-a)*(s-b)*(s-c)*(s-d));
	  printf("%.2lf\n",res);
	}
	return 0;
}

