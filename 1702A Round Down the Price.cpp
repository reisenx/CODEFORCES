#include<stdio.h>
int n,num[10005],sub[10005],ans[10005];
int main ()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&num[i]);
	}
	for(int i=1;i<=n;i++)
	{
		if(num[i]==1000000000)
		{
			ans[i]==0;
		}
		else if(num[i]/100000000!=0)
		{
			sub[i]=num[i]/100000000;
			ans[i]=num[i]-100000000;
		}
		else if(num[i]/10000000!=0)
		{
			sub[i]=num[i]/10000000;
			ans[i]=num[i]-10000000;
		}
		else if(num[i]/1000000!=0)
		{
			sub[i]=num[i]/1000000;
			ans[i]=num[i]-1000000;
		}
		else if(num[i]/100000!=0)
		{
			sub[i]=num[i]/100000;
			ans[i]=num[i]-100000;
		}
		else if(num[i]/10000!=0)
		{
			sub[i]=num[i]/10000;
			ans[i]=num[i]-10000;
		}
		else if(num[i]/1000!=0)
		{
			sub[i]=num[i]/1000;
			ans[i]=num[i]-1000;
		}
		else if(num[i]/100!=0)
		{
			sub[i]=num[i]/100;
			ans[i]=num[i]-100;
		}
		else if(num[i]/10!=0)
		{
			sub[i]=num[i]/10;
			ans[i]=num[i]-10;
			
		}
		else
		{
			ans[i]=num[i]-1;
		}
	}
	for(int i=1;i<=n;i++)
	{
		printf("%d\n",ans[i]);
	}
	
}
