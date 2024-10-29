#include<stdio.h>
int a,b,ans=0;
int main ()
{
	scanf("%d%d",&a,&b);
	while(a<=b)
	{
		a=a*3;
		b=b*2;
		ans++;
	}
	printf("%d",ans);
}
