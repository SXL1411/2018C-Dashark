#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        char a[501]={0};int lengthA=0;
        char b[501]={0};int lengthB=0;
        {
            char tmp[501]={0};
            scanf("%s",tmp);
            for(;tmp[lengthA]!=0;lengthA++) {}
            for(int j=0;j<lengthA;j++){
                a[j]=tmp[lengthA-j-1]-48;
            }
        }
        {
            char tmp[501]={0};
            scanf("%s",tmp);
            for(;tmp[lengthB]!=0;lengthB++) {}
            for(int j=0;j<lengthB;j++){
                b[j]=tmp[lengthB-j-1]-48;
            }
        }
        for(int i=0;i<=lengthA||i<=lengthB;i++){
            a[i]=a[i]+b[i];
            if(a[i]>9){
                a[i]=a[i]-10;
                a[i+1]++;
            }
        }
        int index=lengthA>lengthB?lengthA:lengthB;
        while(a[index]==0&&index>0){
            index--;
        }
        for(int i=index;i>=0;i--){
            printf("%d",a[i]);
        }
        printf("\n");
    }

    return 0;
}
