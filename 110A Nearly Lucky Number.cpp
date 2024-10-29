#include<stdio.h>
#include<string.h>
int ln,cnt=0;
char txt[105];
int main ()
{
	scanf("%s",txt);
	ln=strlen(txt);
	for(int i=0;i<ln;i++)
	{
		if(txt[i]=='4'||txt[i]=='7')
		{
			cnt++;
		}
	}
	if(cnt==0)
	{
		printf("NO");
	}
	else if(cnt==4||cnt==7)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
}
