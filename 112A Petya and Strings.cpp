#include<stdio.h>
#include<string.h>
#include<ctype.h>
int len;
char a[105],b[105];
int main ()
{
	scanf("%s%s",a,b);
	len=strlen(a);
	for(int i=0;i<len;i++)
	{
		a[i]=tolower(a[i]);
		b[i]=tolower(b[i]);
	}
	for(int i=0;i<len;i++)
	{
		if(a[i]<b[i])
		{
			printf("-1");
			return 0;
		}
		else if(a[i]>b[i])
		{
			printf("1");
			return 0;
		}
	}
	printf("0");
	return 0;
}
