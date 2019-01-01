#include <stdio.h>
#include <string.h>
struct Candidate 
	{
       char name[26];   
	}c[100],m;
struct dolao 
	{
       char vote[26];   
	}o[100];
int main()
{		
	char A[4]="END";
	int a=0,b=0,s=0,d=0;int j,k;
	for(int i=0;i<3;i++)
	{
		scanf("%s",c[i].name);
	}
	for( j=1;j<3;j++)
	{
		for( k=0;k<3;k++)
		{
			if(strcmp(c[k].name,c[j].name)>0)
			{ 
				m=c[k];
				c[k]=c[j];
				c[j]=m;
			}
		}
	}
	for(int l=0;;l++)
	{
		scanf("%s",o[l].vote);
		if(strcmp(o[l].vote,c[0].name)==0)
		{a++;}
		if(strcmp(o[l].vote,c[1].name)==0)
		{b++;}
		if(strcmp(o[l].vote,c[2].name)==0)
		{s++;}
		if(strcmp(o[l].vote,c[0].name)!=0 && strcmp(o[l].vote,c[1].name)!=0&&strcmp(o[l].vote,c[2].name)!=0)
		{d++;}
		if(strcmp(o[l].vote,A)==0)
		{break;}
	}
	printf("%s:%d\n%s:%d\n%s:%d\nQQ:%d",c[0].name,a,c[1].name,b,c[2].name,s,d-1);
 } 
