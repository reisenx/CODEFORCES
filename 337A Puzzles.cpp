#include<stdio.h>
int n,m,f[55],temp,min=6969;
int main ()
{
	scanf("%d%d",&n,&m);
	for(int i=1;i<=m;i++)
	{
		scanf("%d",&f[i]);
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(f[j]>f[i])
			{
				temp=f[j];
				f[j]=f[i];
				f[i]=temp;
			}
		}
	}
	for(int i=1;i<=m-n+1;i++)
	{
		if(f[i+n-1]-f[i]<min)
		{
			min=f[i+n-1]-f[i];
		}
	}
	printf("%d",min);
	return 0;
}
