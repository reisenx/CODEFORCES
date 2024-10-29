#include<stdio.h>
double n,a[105],sum=0,ans;
int main ()
{
	scanf("%lf",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%lf",&a[i]);
		sum=sum+a[i];
	}
	ans=sum/n;
	printf("%.10lf",ans);
}
