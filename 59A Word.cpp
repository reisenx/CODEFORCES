#include<stdio.h>
#include<ctype.h>
#include<string.h>
int ln,cnl=0,cnu=0;
char txt[105];
int main ()
{
	scanf("%s",txt);
	ln=strlen(txt);
	for(int i=0;i<ln;i++)
	{
		if(txt[i]>='A'&&txt[i]<='Z')
		{
			cnu++;
		}
		else if(txt[i]>='a'&&txt[i]<='z')
		{
			cnl++;
		}
	}
	if(cnu>cnl)
	{
		for(int i=0;i<ln;i++)
		{
			txt[i]=toupper(txt[i]);
		}
	}
	else if(cnu<=cnl)
	{
		for(int i=0;i<ln;i++)
		{
			txt[i]=tolower(txt[i]);
		}
	}
	printf("%s",txt);
}
