#include<stdio.h>
int n,a[1000005],cnt=0;
int main ()
{
	scanf("%d",&n);
	for(int i=2;i<=n;i++)
	{
		if(n%i==0)
		{
			cnt++;
			a[cnt]=i;
		}
	}
	for(int i=1;i<=cnt;i++)
	{
		for(int j=1;j<=cnt;j++)
		{
			if(a[i]+a[j]==n)
			{
				printf("%d %d",a[i],a[j]);
				return 0;
			}
		}
	}
}
