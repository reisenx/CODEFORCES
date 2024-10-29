#include<stdio.h>
int t,k[105],seq[1005],cnt=0;
int main ()
{
	for(int i=1;i<=1666;i++)
	{
		if(i%3!=0&&i%10!=3)
		{
			cnt++;
			seq[cnt]=i;
		}
	}
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
		scanf("%d",&k[i]);
	}
	for(int i=1;i<=t;i++)
	{
		printf("%d\n",seq[k[i]]);
	}
}
