#include<stdio.h>
int t,a[10005],b[10005],c[10005],x[10005],y[10005];
int main ()
{
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
		scanf("%d%d%d%d%d",&a[i],&b[i],&c[i],&x[i],&y[i]);
	}
	for(int i=1;i<=t;i++)
	{
		if(x[i]==0&&y[i]==0)
		{
			printf("NO\n");
		}
		else if(c[i]<x[i]-a[i]+y[i]-b[i])
		{
			printf("NO\n");
		}
		else
		{
			printf("YES\n");
		}
	}
	return 0;
}
