#include<stdio.h>
int n,scr[1005],min,max,ans=0;
int main ()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&scr[i]);
	}
	min=scr[1];
	max=scr[1];
	for(int i=2;i<=n;i++)
	{
		if(scr[i]>max)
		{
			max=scr[i];
			ans++;
		}
		else if(scr[i]<min)
		{
			min=scr[i];
			ans++;
		}
	}
	printf("%d",ans);
}
