#include<stdio.h>
#include<string.h>
int n,ln[105];
char txt[105][105];
int main ()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%s",txt[i]);
		ln[i]=strlen(txt[i]);
	}
	for(int i=1;i<=n;i++)
	{
		if(ln[i]<=10)
		{
			printf("%s\n",txt[i]);
		}
		else
		{
			printf("%c",txt[i][0]);
			printf("%d",ln[i]-2);
			printf("%c\n",txt[i][ln[i]-1]);
		}
	}
	return 0;
}
