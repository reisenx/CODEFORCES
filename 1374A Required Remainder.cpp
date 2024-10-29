#include<stdio.h>
int t,x[50005],y[50005],n[50005],ans[50005];
int main()
{
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
		scanf("%d%d%d",&x[i],&y[i],&n[i]);
		if(n[i]%x[i]<y[i])
		{
			ans[i]=n[i]-((n[i]%x[i])+(x[i]-y[i]));
		}
		else if(n[i]%x[i]>=y[i])
		{
			ans[i]=n[i]-(n[i]%x[i])+y[i];
		}
	}
	for(int i=1;i<=t;i++)
	{
		printf("%d\n",ans[i]);
	}
	return 0;
}
