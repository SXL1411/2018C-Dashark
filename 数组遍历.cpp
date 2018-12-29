//给定一个大小是m*n（m,n<=100）的整形数组A，求从A[0][0]到A[m-1][n-1]共有多少条路径，注意只能向右或是向下移动
//第1行是N代表有N组测试数据。然后每组测试数据包括两个整数m和n，分别用来表示数组的行和列。
#include<stdio.h>
int ro[101][101];
int main()
{
 int N,m,n,i,j;
 scanf("%d",&N);
 while(N>0)
 {
  scanf("%d%d",&m,&n);
  for(i=0;i<m;i++)
  {
   for(j=0;j<n;j++)
   if(i==0||j==0)
    ro[i][j]=1;
   else
    ro[i][j]=ro[i-1][j]+ro[i][j-1];
  }
  printf("%d\n",ro[m-1][n-1]);
  N--;
 }
}
