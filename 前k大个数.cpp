#include <stdio.h> 
int main() 
{ 	
    int n,m,x=0,k;
    scanf("%d%d",&n,&k);
	int a[n]; 		
    for(int i=0;i<n;i++) 		
	{ 			
   scanf("%d",&a[i]);
	} 		
	for(int j=1;j<n;j++) 	
	{
	for(int b=j;b>0;b--) 
	{ 
	if(a[b]>a[b-1]) 
	{ 				 	
	x=a[b]; 			 
	a[b]=a[b-1]; 					
	a[b-1]=x; 				
	} 			
	} 	
	} 	
	for(int s=0;s<k;s++) 	
	{ 		
	printf("%d ",a[s]); 
	} 
return 0; 
}
