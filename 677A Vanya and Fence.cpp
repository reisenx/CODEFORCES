#include<stdio.h>
int n,h,a[1005],ans=0;
int main ()
{
	scanf("%d%d",&n,&h);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>h)
		{
			ans=ans+2;
		}
		else if(a[i]<=h)
		{
			ans++;
		}
	}
	printf("%d",ans);
	return 0;
}
