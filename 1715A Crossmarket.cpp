#include<stdio.h>
int t,x[1005],y[1005],ans[1005],temp;
int main ()
{
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
		scanf("%d%d",&x[i],&y[i]);
		x[i]=x[i]-1;
		y[i]=y[i]-1;
		if(x[i]>y[i])
		{
			temp=x[i];
			x[i]=y[i];
			y[i]=temp;
		}
		if(x[i]==0&&y[i]==0)
		{
			ans[i]=0;
		}
		else if(x[i]!=0&&y[i]==0)
		{
			ans[i]=x[i]+1;
		}
		else if(x[i]==0&&y[i]!=0)
		{
			ans[i]=y[i]+1;
		}
		else
		{
			ans[i]=(x[i]/2)+y[i]+(x[i]/2)+1+(x[i]-(x[i]/2))+(x[i]-(x[i]/2));
		}
	}
	for(int i=1;i<=t;i++)
	{
		printf("%d\n",ans[i]);
	}
	return 0;
}
