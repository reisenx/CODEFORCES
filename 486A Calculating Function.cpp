#include<stdio.h>
long long int n,ans;
int main ()
{
	scanf("%lld",&n);
	if(n%2!=0)
	{
		ans=((n-1)/2)-n;
	}
	else
	{
		ans=n/2;
	}
	printf("%lld",ans);
}
