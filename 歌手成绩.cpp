#include <stdio.h>
int main ()
{
	struct test{
		int a;
		int grade[6];
		float average;
	};
	struct test singer[10];
		int sum=0;
	float x=0;
	for(int i=0;i<10;i++)
	{
		sum=0;
		singer[i].a=i+1;
		for(int j=0;j<6;j++)
		{
			scanf("%d",&singer[i].grade[j]);
			sum=sum+singer[i].grade[j];
		}
		singer[i].average=(float)sum/6;
	}
		for(int i=0;i<10;i++)
	{
		for(int j=0;j<9;j++)
		{
			if(singer[j].average<singer[j+1].average)
			{
				x=singer[j].average;
				singer[j].average=singer[j+1].average;
				singer[j+1].average=x;
				x=singer[j].a;
				singer[j].a=singer[j+1].a;
				singer[j+1].a=x;
			}
		}
	}
	for(int i=0;i<10;i++)
	{
		printf("%d %.2f\n",singer[i].a,singer[i].average);
	}
		return 0;
} 
