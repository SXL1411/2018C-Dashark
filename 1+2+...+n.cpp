#include <stdio.h> 
int main()
{
    int n;
    while(1)
	{
        //printf("\n");
        if(scanf("%d",&n),n>0 && n<101) 
		break;
        printf("Error, redo: ");
    }
    printf("%d\n",(1+n)*n/2);
    return 0;
}
