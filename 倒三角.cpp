#include <stdio.h>
int main()
{int i,j,n,m,k;
scanf("%d",&m);
for(k=0;k<m;k++)
{
scanf("%d",&n);        //����m��ֵ
//	scanf("%d",n);
for(i=0;i<n;i++)        //��n��
{
for(j=0;j<i;j++)        //ǰ��Ŀո�
printf(" ");
for(j=0;j<2*(n-i)-1;j++)        //���һ���ϵġ�*��
printf("*");
printf("\n");                //һ�н���������
} 
}
return 0;
}
