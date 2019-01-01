#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char name[100][11];
char number[100][19];
char grade1[100][4];
int grade2[100];

int main() 
{
	int m,n,k;
	scanf("%d",&n);
	for(m=0;m<n;m++){
		scanf("%s %s %s",&name[m],&number[m],&grade1[m]);
		for(k=0;k<strlen(grade1[m]);k++){
			if(grade1[m][0]=='n'){
				grade2[m]=-1;
				break;
			}else{
				grade2[m]=grade2[m]*10+(grade1[m][k]-'0'); 
			}
		}
	}
	int max=-1,min=101,point_max,point_min;
	for(m=0;m<n;m++){
		if(grade2[m]!=-1&&grade2[m]>max){
			point_max=m;
			max=grade2[m];
		}
		if(grade2[m]!=-1&&grade2[m]==max){
			if(/*strcpy*/strcmp(name[point_max],name[m])>0){
				point_max=m;		
			}
		}
		if(grade2[m]!=-1&&grade2[m]<min){
			point_min=m;
			min=grade2[m];
		}
		if(grade2[m]!=-1&&grade2[m]==min){
			if(/*strcpy*/strcmp(name[point_min],name[m])<0){
				point_min=m;
			}
		}		
	}
	printf("%s %s\n",name[point_max],number[point_max]);
	printf("%s %s\n",name[point_min],number[point_min]);	
	return 0;
}
