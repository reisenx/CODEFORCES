#include<stdio.h>
int n,k;
int main ()
{
	scanf("%d%d",&n,&k);
	for(int i=n;i>=0;i--)
	{
		if(240-(5*((i*(i+1))/2))-k>=0)
		{
			printf("%d",i);
			return 0;
		}
	}
}
