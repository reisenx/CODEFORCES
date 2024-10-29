#include<stdio.h>
int x,ans;
int main()
{
	scanf("%d",&x);
	if(x%5!=0)
	{
		ans=((x-(x%5))/5)+1;
		printf("%d",ans);
		return 0;
	}
	else
	{
		ans=x/5;
		printf("%d",ans);
		return 0;
	}
}
