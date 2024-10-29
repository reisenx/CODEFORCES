#include<stdio.h>
#include<string.h>
int ln;
char a[105],b[105];
int main ()
{
	scanf("%s%s",a,b);
	ln=strlen(a);
	for(int i=0;i<ln;i++)
	{
		if(a[i]==b[i])
		{
			printf("0");
		}
		else
		{
			printf("1");
		}
	}
}
