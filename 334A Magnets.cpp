#include<stdio.h>
int n,count=1;
char m[100005][10];
int main ()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%s",m[i]);
	}
	for(int i=2;i<=n;i++)
	{
		if(m[i][0]==m[i-1][1])
		{
			count++;
		}
	}
	printf("%d",count);
	return 0;
}
