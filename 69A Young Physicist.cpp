#include<stdio.h>
int n,vec[105][5],sumx=0,sumy=0,sumz=0;
int main ()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=3;j++)
		{
			scanf("%d",&vec[i][j]);
		}
	}
	for(int i=1;i<=n;i++)
	{
		sumx=sumx+vec[i][1];
		sumy=sumy+vec[i][2];
		sumz=sumz+vec[i][3];
	}
	if(sumx==0&&sumy==0&&sumz==0)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
}
