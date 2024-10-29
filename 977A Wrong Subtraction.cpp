#include<stdio.h>
int a,b,count=0;
int main ()
{
	scanf("%d%d",&a,&b);
	while(count!=b)
	{
		if(a%10==0)
		{
			a=a/10;
		}
		else
		{
			a=a-1;
		}
		count++;
	}
	printf("%d",a);
}
