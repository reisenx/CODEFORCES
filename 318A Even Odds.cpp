#include<stdio.h>
long long int n,k;
int main ()
{
	scanf("%lld%lld",&n,&k);
	if(n%2==0)
	{
		if(k>n/2)
		{
			printf("%lld",(k-(n/2))*2);
		}
		else
		{
			printf("%lld",(k*2)-1);
		}
	}
	else
	{
		if(k>(n/2)+1)
		{
			printf("%lld",(k-((n/2)+1))*2);
		}
		else
		{
			printf("%lld",(k*2)-1);
		}
	}
}
