#include<stdio.h>
#include<string.h>
int ln,cnt=0;
char txt[105];
int main ()
{
	scanf("%s",txt);
	ln=strlen(txt);
	for(int i=0;i<=ln;i++)
	{
		if(cnt==7)
		{
			printf("YES");
			return 0;
		}
		else if(txt[i]=='0')
		{
			cnt++;
		}
		else
		{
			cnt=0;
		}
	}
	cnt=0;
	for(int i=0;i<=ln;i++)
	{
		if(cnt==7)
		{
			printf("YES");
			return 0;
		}
		else if(txt[i]=='1')
		{
			cnt++;
		}
		else
		{
			cnt=0;
		}
	}
	printf("NO");
	return 0;
}
