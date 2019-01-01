#include <stdio.h>
int HANNUOTA(int* count,int n, char a, char b, char c)
{
	if( n < 1 )
		return 0;	
	HANNUOTA(count,n-1, a, c, b);
	printf("%c->%c\n", a, c);
	(*count)++;
	HANNUOTA(count,n-1, b, a, c);
}
 
int main()
{
	int num;
	scanf("%d", &num);
    int null=0;
	int *count=&null;
	HANNUOTA(count,num, 'A', 'B', 'C');
    printf("%d",(*count));
	return 0;
}
