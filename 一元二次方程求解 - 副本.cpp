//ax*x+bx+c=0
#include <stdio.h>
#include <math.h>
int main ()
{
	double a,b,c,d;
	printf("请输入一元二次方程的系数a,b,c:\n");
	scanf("%lf%lf%lf",&a,&b,&c);
	d=b*b-4*a*c;
	if(d<0)
	{
		printf("此方程无解\n");
		return 1; 
	}
	if(d==0)
	{
		printf("方程有两个相等的根，x1=x2=%lf\n",-b/(2*a));
		return 0;
	}
	if(d>0)
	{
		printf("方程有两个不相等的根，x1=%lf x2=%lf",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
	}
	return 0;
 } 
