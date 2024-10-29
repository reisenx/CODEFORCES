#include<stdio.h>
#include<string.h>
int t,ln[10005];
char txt[10005][15],min='9';
int main ()
{
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
		scanf("%s",txt[i]);
		ln[i]=strlen(txt[i]);
	}
	for(int i=1;i<=t;i++)
	{
		for(int j=0;j<ln[i]-1;j++)
		{
			if(txt[i][j]<min)
			{
				min=txt[i][j];
			}
		}
		printf("%c\n",min);
		min='9';
	}
}
