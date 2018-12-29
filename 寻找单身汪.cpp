#include <stdio.h>
int main()
{
	int a[100],n,t;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int j=1;j<n;j++)
	{
		for(int k=0;k<j;k++)
		{
			if(a[k]<a[j])
			{
				t=a[k];
				a[k]=a[j];
				a[j]=t;	
			}
		}	
	}
	int c=0,d=0;
	for(int s=0;s<n;s=s+2)
	{
		c=c+a[s];
	}
	for(int m=1;m<n;m=m+2)
	{
		d=d+a[m];
	}
	int danshu=c-d;
	printf("%d",danshu);
 } 	
