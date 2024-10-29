#include<stdio.h>
int n,ans=0;
char cmd[155][5];
int main ()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%s",cmd[i]);
	}
	for(int i=1;i<=n;i++)
	{
		if(cmd[i][0]=='+'&&cmd[i][1]=='+'&&cmd[i][2]=='X')
		{
			ans++;
		}
		else if(cmd[i][0]=='X'&&cmd[i][1]=='+'&&cmd[i][2]=='+')
		{
			ans++;
		}
		else if(cmd[i][0]=='-'&&cmd[i][1]=='-'&&cmd[i][2]=='X')
		{
			ans--;
		}
		else if(cmd[i][0]=='X'&&cmd[i][1]=='-'&&cmd[i][2]=='-')
		{
			ans--;
		}
	}
	printf("%d",ans);
}
