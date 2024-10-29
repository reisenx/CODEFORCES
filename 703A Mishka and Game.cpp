#include<stdio.h>
int n,m[105],c[105],wm=0,wc=0;
int main ()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d",&m[i],&c[i]);
		if(m[i]>c[i])
		{
			wm++;
		}
		else if(m[i]<c[i])
		{
			wc++;
		}
	}
	if(wm>wc)
	{
		printf("Mishka");
	}
	else if(wm<wc)
	{
		printf("Chris");
	}
	else if(wm==wc)
	{
		printf("Friendship is magic!^^");
	}
	return 0;
}
