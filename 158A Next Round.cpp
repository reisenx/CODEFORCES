#include<stdio.h>
int n,k,sc[105],cnt=0;
int main ()
{
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&sc[i]);
	}
	for(int i=1;i<=n;i++)
	{
		if(sc[i]<=0)
		{
			cnt=cnt;
		}
		else if(sc[i]>=sc[k])
		{
			cnt++;
		}
	}
	printf("%d",cnt);
}
