#include <stdio.h>
int main()
{
	int a,b,c,d,e;
	scanf("%d",&a);
	int q[a-1],h[a-1],j[a-1],k[a-1],l[a-1],m[a-1],n[a-1],w[a-1];
	char name[a-1][20];
	for(b=0;b<a;b++)
	{
		scanf("%s%d%d%d%d",name[b],&w[b],&j[b],&k[b],&l[b]);
	    q[b]=(int) name[b][0];
		m[b]=j[b]+k[b]+l[b];
		n[b]=m[b]*1000-q[b];
		for(c=0;c<b;c++)
		{
			if(n[b]>n[c])
			{
				int x=n[b];
				n[b]=n[c];
				n[c]=x;
			}
		}
	}
		e=0;d=0;
		while(d<a)
		{
			while(m[e]*1000-q[e]!=n[d])
			{
				e++;
			}
			printf("[name:%s,sum:%d,sno:%d]\n",name[e],m[e],w[e]);
			e=0;
			d++;
		}
	return 0;
} 
