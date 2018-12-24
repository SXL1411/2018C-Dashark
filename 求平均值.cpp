#include <stdio.h>
int main()
{
	int n = 0, i;
float shuZi = 0, sum = 0;
scanf("%d", &n);
for (i = 0; i < n; i++) 
{
scanf("%f", &shuZi);
sum += shuZi;
}
printf("%.2f\n", sum / n);
return 0;
}
