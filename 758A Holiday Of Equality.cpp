#include<stdio.h>
int n,a[105],max=-1,sum;
int main ()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	for(int i=1;i<=n;i++)
	{
		sum=sum+(max-a[i]);
	}
	printf("%d",sum);
	return 0;
}
