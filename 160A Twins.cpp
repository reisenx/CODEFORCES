#include<stdio.h>
int n,a[105],temp,all=0,sum=0;
int main ()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		all=all+a[i];
	}
	for(int i=2;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			if(a[i-1]<a[j])
			{
				temp=a[j];
				a[j]=a[i-1];
				a[i-1]=temp;
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		sum=sum+a[i];
		if(sum>all-sum)
		{
			printf("%d",i);
			return 0;
		}
	}
}
