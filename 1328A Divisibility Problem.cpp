#include<stdio.h>
int t,a[10005],b[10005],ans[10005];
int main ()
{
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
		if(a[i]%b[i]==0)
		{
			ans[i]=0;
		}
		else
		{
			ans[i]=b[i]-(a[i]%b[i]);
		}
	}
	for(int i=1;i<=t;i++)
	{
		printf("%d\n",ans[i]);
	}
	return 0;
}
