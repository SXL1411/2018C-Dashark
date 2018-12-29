#include <stdio.h>
int main()
{
	int n,m,a[100][100],l,j;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&m);
		for(j=0;j<m;j++)
		{
			a[j][0]=1;
			a[j][j]=1;
		}
		for(j=1;j<m;j++)
		{
			for(l=1;l<j;l++)
			{
				a[j][l]=a[j-1][l-1]+a[j-1][l];
			}
		}
		for(j=0;j<m;j++)
		{
			for(l=0;l<=j;l++)
			{
				printf("%d ",a[j][l]);
			}
			printf("\n");	
		}
	}
}
