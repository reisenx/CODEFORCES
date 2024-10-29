#include<stdio.h>
int t,n[105],a[105][105],b[105][105];
char txt[105][105][15];
int main ()
{
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
		scanf("%d",&n[i]);
		for(int j=1;j<=n[i];j++)
		{
			scanf("%d",&a[i][j]);
		}
		for(int j=1;j<=n[i];j++)
		{
			scanf("%d%s",&b[i][j],txt[i][j]);
			for(int k=0;k<b[i][j];k++)
			{
				if(txt[i][j][k]=='U')
				{
					if(a[i][j]==0)
					{
						a[i][j]=9;
					}
					else
					{
						a[i][j]--;
					}
				}
				else if(txt[i][j][k]=='D')
				{
					if(a[i][j]==9)
					{
						a[i][j]=0;
					}
					else
					{
						a[i][j]++;
					}
				}
			}
		}
	}
	for(int i=1;i<=t;i++)
	{
		for(int j=1;j<=n[i];j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
