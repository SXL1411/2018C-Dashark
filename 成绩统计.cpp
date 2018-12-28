#include<stdio.h>
int main(void)
{
	int n;
	scanf("%d",&n); 
	int N[n];//Ñ§ºÅ 
	int A[n];//³É¼¨1 
	int B[n];//2 
	int C[n];//3 
	double X[n];//Æ½
	double a=0;
	for(int i=1;i<=n;i++)
	{
		scanf("%d %d %d %d",&N[i],&A[i],&B[i],&C[i]);
		X[i]=(A[i]+B[i]+C[i])/3.00;
		printf("%.2f\n",X[i]);
        if(a>X[i])
		;
		else 
		a=X[i];
	}
	for(int i=1;i<=n;i++)
	{
		if(X[i]==a)
    	printf("%d %.2f\n",N[i],a);
    	else
    	;
	}
	return 0;
}
