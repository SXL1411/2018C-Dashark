#include<stdio.h>
int main()
{
    int m;
    scanf("%d",&m);
    int i;
    for(i=0;i<m;i++)
    {
        int lost_num=0;
        int j=0;
        int input;
        while(1)
        {
            scanf("%d",&input);
            lost_num^=++j;
            if(input==0) break;
            lost_num^=input;
        }
        printf("%d\n",lost_num);
    }
    return 0;
}
