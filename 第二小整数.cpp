#include <stdio.h>
int main()
{
	int n,m,x=0,y;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&m);
		int a[m];
		for(int j=0;j<m;j++)
		{
			scanf("%d",&a[j]);
		}
		for(int o=1;o<m;o++)
		{
			for(int b=o;b>0;b--)
			{
				if(a[b]<a[b-1]) 
				{
				 	x=a[b];
			    	a[b]=a[b-1];
					a[b-1]=x;
				}
			}
		}
		for(int c=0;c<m;c++)
		{
			if(a[c]>a[0]) {printf("%d\n",a[c]);break;}
			if(c==m-1)  {printf("ERROR\n");break;}
		}
	}
	return 0;
}
