#include<stdio.h>
int main()
{
 int i, j;
 for (i = 1; i <10; i++)             //  i��������
 {
  for (j = 1; j <= i; j++)           //  j��������������j<=i���Ƶ�i�е��������С�ڵ���i
  {
   printf("%d*%d=%d ", i, j, i*j);
   if (i == j)                       //  �ж����е�����
    printf("\n");
  }
 }
// system("pause");
 return 0;
}
