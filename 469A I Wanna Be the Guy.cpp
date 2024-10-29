#include<stdio.h>
int n,pa,a[105],pb,b[105],cnt[105];
int main ()
{
	scanf("%d",&n);
	scanf("%d",&pa);
	for(int i=1;i<=pa;i++)
	{
		scanf("%d",&a[i]);
		for(int j=1;j<=n;j++)
		{
			if(a[i]==j)
			{
				cnt[j]++;
			}
		}
	}
	scanf("%d",&pb);
	for(int i=1;i<=pb;i++)
	{
		scanf("%d",&b[i]);
		for(int j=1;j<=n;j++)
		{
			if(b[i]==j)
			{
				cnt[j]++;
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(cnt[i]==0)
		{
			printf("Oh, my keyboard!");
			return 0;
		}
	}
	printf("I become the guy.");
	return 0;
}
