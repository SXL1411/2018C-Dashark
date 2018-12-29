#include <stdio.h>
int main()
{
	int n,i,man,woman,boy,x,y;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d %d",&x,&y);
			//man+woman+boy=x;
		for(man=0;man<=x;man++)
		{
			for(woman=0;woman<=x;woman++)
			{
				boy=x-man-woman;
				if(3*man+2*woman+boy==y)
				{
					printf("%d %d %d",man,woman,boy);
					printf("\n");
				}
			}
		}
	}
	return 0;
 } 
