#include<stdio.h>
int n,a[100005],max=-1,count=1;
int main ()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	if(n==1)
	{
		printf("1");
		return 0;
	}
	for(int i=2;i<=n+1;i++)
	{
		if(a[i]>=a[i-1])
		{
			count++;
		}
		else
		{
			if(count>max)
			{
				max=count;
			}
			count=1;
		}
	}
	printf("%d",max);
}
