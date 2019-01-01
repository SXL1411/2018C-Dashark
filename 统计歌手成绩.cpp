#include<stdio.h>
int main()
{
		int b[10],y;
	double ave[10],x;
	for(int i=0;i<10;i++)
	{
		double s=0,sum=0;
			b[i]=i+1;
		for(int j=0;j<6;j++)
		{
			scanf("%lf",&s);
			sum=sum+s;
		}
		ave[i]=sum/6.00;
	}
	for(int o=1;o<10;o++)
		{
			for(int q=o;q>0;q--)
			{
				if(ave[q]>ave[q-1]) 
				{
				 	x=ave[q];
			    	ave [q]=ave [q-1];
					ave [q-1]=x;
					y=b[q];
					b[q]=b[q-1];
					b[q-1]=y;
				}
			}
		}
	for(int i=0;i<10;i++)
	{
		printf("%d %.2lf\n",b[i],ave [i]);
	}
	return 0;
} 
