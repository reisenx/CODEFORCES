#include<stdio.h>
int k,l,m,n,d,cnt=0,ans;
int main ()
{
	scanf("%d%d%d%d%d",&k,&l,&m,&n,&d);
	for(int i=1;i<=d;i++)
	{
		if(i%k!=0&&i%l!=0&&i%m!=0&&i%n!=0)
		{
			cnt++;
		}
	}
	ans=d-cnt;
	printf("%d",ans);
	return 0;
}
