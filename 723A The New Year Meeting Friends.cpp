#include<stdio.h>
int x[10],ans,temp;
int main ()
{
	for(int i=1;i<=3;i++)
	{
		scanf("%d",&x[i]);
	}
	for(int i=1;i<=3;i++)
	{
		for(int j=i+1;j<=3;j++)
		{
			if(x[i]>x[j])
			{
				temp=x[j];
				x[j]=x[i];
				x[i]=temp;
			}
		}
	}
	ans=(x[3]-x[2])+(x[2]-x[1]);
	printf("%d",ans);
}
