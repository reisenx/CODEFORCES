#include<stdio.h>
int k,n,w,ans;
int main()
{
	scanf("%d%d%d",&k,&n,&w);
	ans=k*((w*(w+1))/2)-n;
	if(ans<=0)
	{
		printf("0");
	}
	else
	{
		printf("%d",ans);
	}
}
