#include <stdio.h>
const int daysInMonth[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int main() {
    int m;
    scanf("%d",&m);
    for(int i=0 ; i<m ; i++){
        int y,m,d,sum=0;
        scanf("%d%d%d",&y,&m,&d);
        for(int j = 0;j < m-1; ++j){
            sum+=daysInMonth[j];
            if(j==1)
                sum+=((y%100==0)?(y%400==0):(y%4==0))?1:0;
        }
        sum+=d;
        printf("%d\n",sum);
    }
    return 0;
}
