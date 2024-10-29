#include<stdio.h>
int k,n,x[1005],y[1005],temp;
int main ()
{
	scanf("%d%d",&k,&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d",&x[i],&y[i]);
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			if(x[i]>x[j])
			{
				temp=x[i];
				x[i]=x[j];
				x[j]=temp;
				temp=y[i];
				y[i]=y[j];
				y[j]=temp;
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(k>x[i])
		{
			k=k+y[i];
		}
		else
		{
			printf("NO");
			return 0;
		}
	}
	printf("YES");
	return 0;
}
