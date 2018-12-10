#include <stdio.h>
int main()
{
	int a,b,x,y,i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d%d",&x,&y);    //输入头和脚的数量 
	    a=2*x-y/2;
	    b=y/2-x;
	if(4*x>=y&&y>=2*x)
		printf("%d %d\n",a,b);     //输出鸡和兔的数量 
	else
		printf("error");
	} 
	return 0;
 } 
