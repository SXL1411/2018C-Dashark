//合并两个有序数组a,b。
//第一行输入两个数据m,n，分别代表数组a,b的长度，第二行第三行分别输入两个数组a,b,保证数组有序。
//将两个数组合并后输出，保证数组仍然有序。输出数据之间用空格隔开。
#include<stdio.h>
int main()
{
 int n,m,a[100],j,i,x;
 scanf("%d%d",&n,&m);
 for(i=0;i<n+m;i++)
 {
  scanf("%d",&a[i]);
 } 
 for(i=0;i<n+m;i++)
 {
  for(j=i+1;j<n+m;j++)
  {
   if(a[i]>a[j])
   {
    x=a[i];
    a[i]=a[j];
    a[j]=x;
   }
  } 
 } 
 for(i=0;i<n+m;i++)
 {
  printf("%d ",a[i]);
 } 
}
