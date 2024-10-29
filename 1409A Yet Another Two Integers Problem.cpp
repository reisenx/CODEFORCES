#include<stdio.h>
int n,a[20005],b[20005],c[20005],ans[20005];
int main ()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d",&a[i],&b[i]);
		if(a[i]==b[i])
		{
			ans[i]=0;
		}
		else if(a[i]>b[i])
		{
			c[i]=a[i]-b[i];
			if(c[i]%10==0)
			{
				ans[i]=c[i]/10;
			}
			else
			{
				ans[i]=((c[i]-(c[i]%10))/10)+1;
			}
		}
		else if(b[i]>a[i])
		{
			c[i]=b[i]-a[i];
			if(c[i]%10==0)
			{
				ans[i]=c[i]/10;
			}
			else
			{
				ans[i]=((c[i]-(c[i]%10))/10)+1;
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		printf("%d\n",ans[i]);
	}
}
