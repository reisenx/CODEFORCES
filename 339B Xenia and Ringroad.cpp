#include<stdio.h>
long long int n,m,a[100005],ans=0;
int main ()
{
	scanf("%lld%lld",&n,&m);
	for(int i=1;i<=m;i++)
	{
		scanf("%lld",&a[i]);
		if(i==1)
		{
			ans=a[i]-1;
		}
		else
		{
			if(a[i]>a[i-1])
			{
				ans=ans+(a[i]-a[i-1]);
			}
			else if(a[i]<a[i-1])
			{
				ans=ans+((n-a[i-1])+a[i]);
			}
		}
	}
	printf("%lld",ans);
	return 0;
}
