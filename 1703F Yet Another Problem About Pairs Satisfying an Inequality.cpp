#include<stdio.h>
long long int t,n[1005],a[1005][20005],ans[1005];
int main ()
{
	scanf("%lld",&t);
	for(int c=1;c<=t;c++)
	{
		scanf("%lld",&n[c]);
		for(int i=1;i<=n[c];i++)
		{
			scanf("%lld",&a[c][i]);
		}
		for(int i=1;i<=n[c];i++)
		{
			for(int j=i+1;j<=n[c];j++)
			{
				if(a[c][i]<i&&i<a[c][j]&&a[c][j]<j)
				{
					ans[c]++;
				}
			}
		}
	}
	for(int i=1;i<=t;i++)
	{
		printf("%lld\n",ans[i]);
	}
}
