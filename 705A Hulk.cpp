#include<stdio.h>
int n;
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		if(i%2!=0&&i==n)
		{
			printf("I hate it");
		}
		else if(i%2==0&&i==n)
		{
			printf("I love it");
		}
		else if(i%2!=0)
		{
			printf("I hate that ");
		}
		else
		{
			printf("I love that ");
		}
	}
}
