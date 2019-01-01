
#include <stdio.h>
#include <string.h>
int main()
{
	int a,b,c,d,e,f,g,i,j,k,l,m,n,p,q;
	char r[10];
	scanf("%d%d",&a,&b);
	int h[a+1][b+1],y[a+1][b+1];
	for(c=1;c<=a;c++)
	{
		for(d=1;d<=b;d++)
		{
			scanf("%d",&e);
			h[c][d]=e;
		}
	}
	scanf("%d",&f);
	for(g=1;g<=f;g++)
	{
		scanf("%s",r);
		if(strcmp(r,"SR")==0)
		{
			scanf("%d%d",&i,&j);
			for(k=1;k<=b;k++)
			{
				y[i][k]=h[i][k];
				h[i][k]=h[j][k];
				h[j][k]=y[i][k];
			}
			j=0;
		}
		else if(strcmp(r,"SC")==0)
		{
			scanf("%d%d",&i,&j);
			for(l=1;l<=a;l++)
			{
				y[l][i]=h[l][i];
				h[l][i]=h[l][j];
				h[l][j]=y[l][i];
			}
			j=0;
		}
		else if(strcmp(r,"DR")==0)
		{
			scanf("%d",&i);
			if(i<a)
			{
				for(m=i;m<a;m++)
				{
					for(n=1;n<=b;n++)
					{
						h[m][n]=h[m+1][n];
					}
				}
			}
			a-=1;
			j=0;
		}
		else if(strcmp(r,"DC")==0)
		{
			scanf("%d",&i);
			if(i<b)
			{
				for(n=i;n<b;n++)
				{
					for(m=1;m<=a;m++)
					{
						h[m][n]=h[m][n+1];
					}
				}
			}
			b-=1;
			j=0;
		}
		else if(strcmp(r,"IR")==0)
		{
			scanf("%d",&i);
			for(m=a;m>=i;m--)
			{
				for(n=1;n<=b;n++)
				{
					h[m+1][n]=h[m][n];
				}
			}
			for(l=1;l<=b;l++)
			{
				h[i][l]=0;
			}
			a+=1;
			j=0;
		}
		else if(strcmp(r,"IC")==0)
		{
			scanf("%d",&i);
			for(n=b;n>=i;n--)
			{
				for(m=1;m<=a;m++)
				{
					h[m][n+1]=h[m][n];
				}
			}
			for(l=1;l<=a;l++)
			{
				h[l][i]=0;
			}
			b+=1;
			j=0;
		}
	}
	for(p=1;p<=a;p++)
	{
		for(q=1;q<=b;q++)
		{
			printf("%d ",h[p][q]);
		}
		printf("\n");
	}
	return 0;
}


