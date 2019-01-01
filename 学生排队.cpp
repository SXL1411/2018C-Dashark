#include<stdio.h>
int main()
{
    int n,m,i;//n个学生，调整m次 
	int a[1001],b[1001];//a位置，b学生 
    scanf ("%d", &n);
    scanf ("%d", &m);
    for(i=1;i<=n;i++)
    {
        a[i]=i;//i位置的学生
        b[i]=i;//i学生的位置
    }
    for (i=0;i<m;i++)
    {
    	int p,q,j;
		int w,x,y,z; 
        scanf("%d %d",&p,&q);
        z=q>0?q:-q;
		w=q>0?1:-1;
        x=b[p];
        for(j=1;j<=z;j++)
        {
            y=a[x+w];
            a[x]=y;
            b[y]=x;
            x=x+w;
        }
        b[p]=x;
        a[x]=p;
    }
    for(i=1; i<=n; i++)
        printf("%d ", a[i]);
    return 0;
}
