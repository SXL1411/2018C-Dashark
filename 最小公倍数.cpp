#include <stdio.h>
int main ()
{
int m, n, p, q,T,i;
scanf ("%d", &T);  
for(i=0;i<T;i++)
{
	scanf("%d %d",&m,&n);
p=m*n;         
while (n!=0)
{
q=m%n;
m=n;
n=q;    
}
printf ("%d\n", p/m);//�����Ļ��������Լ��������С��������
}
return 0;
}

