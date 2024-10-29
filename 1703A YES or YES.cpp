#include<stdio.h>
#include<ctype.h>
int n;
char txt[1005][10];
int main ()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%s",txt[i]);
		for(int j=0;j<3;j++)
		{
			txt[i][j]=tolower(txt[i][j]);
		}
	}
	for(int i=1;i<=n;i++)
	{
		if(txt[i][0]=='y'&&txt[i][1]=='e'&&txt[i][2]=='s')
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
}
