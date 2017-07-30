#include <stdio.h>
#include <math.h>
int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	
	while(t--)
	{
	double v,k1,k2,r,p;
	scanf("%lf %lf %lf",&v,&k1,&k2);
	if(k2==0)
	r= 3.14159/4.0;
	else
	r = (atan((-4*k1)/k2))/2.0 +3.14159/2.0;
	p = (k1*v*v*sin(2*r))/10.0 + (k2*v*v*sin(r)*sin(r))/20.0 ;
	printf("%.3lf %.3lf\n",r,p);
	}
	return 0;
}

