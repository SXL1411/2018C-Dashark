#include <stdio.h>
int main()
{int i,j,n,m,k;
scanf("%d",&m);
for(k=0;k<m;k++)
{
scanf("%d",&n);        //输入m的值
//	scanf("%d",n);
for(i=0;i<n;i++)        //共n行
{
for(j=0;j<i;j++)        //前面的空格
printf(" ");
for(j=0;j<2*(n-i)-1;j++)        //输出一行上的“*”
printf("*");
printf("\n");                //一行结束，换行
} 
}
return 0;
}
