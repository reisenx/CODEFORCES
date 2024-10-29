#include<stdio.h>
int n,a[105],sum=0;
int main ()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		sum=sum+a[i];
	}
	if(sum>0)
	{
		printf("HARD");
	}
	else
	{
		printf("EASY");
	}
}
