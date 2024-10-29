#include<stdio.h>
int n,len[105],status[105];
char txt1[105][105],txt2[105][105];
int main ()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&len[i]);
		scanf("%s%s",txt1[i],txt2[i]);
		for(int j=0;j<len[i];j++)
		{
			if(txt1[i][j]=='G')
			{
				txt1[i][j]='B';
			}
			if(txt2[i][j]=='G')
			{
				txt2[i][j]='B';
			}
		}
		for(int j=0;j<len[i];j++)
		{
			if(txt1[i][j]!=txt2[i][j])
			{
				status[i]=1;
			}
		}
	}
	for(int i=1;i<=n;i++)
	{
//		printf("%s %s\n",txt1[i],txt2[i]);
		if(status[i]==0)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
}
