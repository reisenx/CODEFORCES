#include<stdio.h>
#include<math.h>
int x[15],temp,a,b,c;
int main ()
{
	for(int i=1;i<=4;i++)
	{
		scanf("%d",&x[i]);
	}
	for(int i=1;i<=4;i++)
	{
		for(int j=i+1;j<=4;j++)
		{
			if(x[i]>x[j])
			{
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
				
			}
		}
	}
	a=x[4]-x[1];
	b=x[4]-x[2];
	c=x[4]-x[3];
	printf("%d %d %d",a,b,c);
}
