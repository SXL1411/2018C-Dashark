#include <stdio.h>
#include <math.h>
int main()
{
    int n;
    scanf("%d",&n);
    while (n--)
	{
    int a; 
scanf("%d",&a);
int m;
int sum = 0;
m = a;
while(m)
{
sum = sum*10 + m%10;
m /= 10;                   // m = m/10
}
if( sum == a)
printf("yes\n");
else
printf("no\n");
    }
    return 0;
}
