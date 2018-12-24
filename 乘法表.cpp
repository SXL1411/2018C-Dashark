#include<stdio.h>
int main()
{
 int i, j;
 for (i = 1; i <10; i++)             //  i控制行数
 {
  for (j = 1; j <= i; j++)           //  j控制列数，条件j<=i控制第i行的输出列数小于等于i
  {
   printf("%d*%d=%d ", i, j, i*j);
   if (i == j)                       //  判定换行的条件
    printf("\n");
  }
 }
// system("pause");
 return 0;
}
