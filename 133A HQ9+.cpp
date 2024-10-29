#include<stdio.h>
#include<string.h>
int len;
char txt[105];
int main ()
{
	scanf("%s",txt);
	len=strlen(txt);
	for(int i=0;i<len;i++)
	{
		if(txt[i]=='H'||txt[i]=='Q'||txt[i]=='9')
		{
			printf("YES");
			return 0;
		}
	}
	printf("NO");
	return 0;
}
