#include <stdio.h>
int nianlin(int i,int j)
{
	int h[i];
	if(i!=1)
	h[i]=nianlin(i-1,j)+j;
	else
	h[i]=0;
	return h[i];
}
int main()
{
	int n,a,k;
	int h[a];
	scanf("%d%d%d",&n,&a,&k);
	if(n>1 && a>0 && k>0)
	printf("%d\n",a+nianlin(n,k));
	else
	printf("Wrong Number\n");
	return 0;
}
