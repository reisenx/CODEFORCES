#include<stdio.h>
long long int t,n[1005],m[1005],ans[1005];
int main ()
{
	scanf("%lld",&t);
	for(int i=1;i<=t;i++)
	{
		scanf("%lld%lld",&n[i],&m[i]);
		ans[i]=((m[i]*(m[i]+1))/2)+(m[i]*(((n[i]*(n[i]+1))/2)-1));
	}
	for(int i=1;i<=t;i++)
	{
		printf("%lld\n",ans[i]);
	}
	return 0;
}
