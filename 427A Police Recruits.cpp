#include<stdio.h>
int n,a[100005],sum=0,ans=0;
int main ()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
		if(sum<0)
		{
			ans++;
			sum=0;
		}
	}
	printf("%d",ans);
	return 0;
}
