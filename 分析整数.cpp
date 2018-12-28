#include <stdio.h>
 
int main()
{
	int N[5],n,i=0,j=0;
	scanf("%d",&n);
	for (i=0;n>=10;i++)
	{
    	N[i]=n%10;
		n=n/10;
			}
	N[i]=n;
	printf("%d\n",i+1);
	for(j=0;j<=i;j++)
	{	
		printf("%d ",N[i-j]);
	}
	printf("\n");
	for( j=0;j<=i;j++)
	{	
		printf("%d ",N[j]);
	} 
 return 0;
 } 

