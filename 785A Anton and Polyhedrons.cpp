#include<stdio.h>
#include<string.h>
int n,ans=0,ln[200005];
char txt[200005][20];
int main ()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%s",txt[i]);
		ln[i]=strlen(txt[i]);
		if(ln[i]==11)
		{
			if(txt[i][0]=='T'&&txt[i][1]=='e'&&txt[i][2]=='t'&&txt[i][3]=='r'&&txt[i][4]=='a')
			{
				ans=ans+4;
			}
			else
			{
				ans=ans+20;
			}
		}
		else if(ln[i]==4)
		{
			ans=ans+6;
		}
		else if(ln[i]==10)
		{
			ans=ans+8;
		}
		else if(ln[i]==12)
		{
			ans=ans+12;
		}
	}
	printf("%d",ans);
}
