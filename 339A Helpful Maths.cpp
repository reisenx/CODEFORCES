#include<stdio.h>
#include<string.h>
int ln,bcnt1=0,bcnt2=0,bcnt3=0,scnt=0,acnt1=0,acnt2=0,acnt3=0;
char txt[105]; 
int main()
{
	scanf("%s",txt);
	ln=strlen(txt);
	for(int i=0;i<ln;i++)
	{
		if(txt[i]=='1')
		{
			bcnt1++;
		}
		else if(txt[i]=='2')
		{
			bcnt2++;
		}
		else if(txt[i]=='3')
		{
			bcnt3++;
		}
	}
	scnt=bcnt1+bcnt2+bcnt3;
	for(int i=1;i<=bcnt1;i++)
	{
		acnt1++;
		if(acnt1==scnt)
		{
			printf("1");
		}
		else
		{
			printf("1+");
		}
	}
	for(int i=1;i<=bcnt2;i++)
	{
		acnt2++;
		if(scnt==bcnt1+acnt2)
		{
			printf("2");
		}
		else
		{
			printf("2+");
		}
	}
	for(int i=1;i<=bcnt3;i++)
	{
		acnt3++;
		if(scnt==bcnt1+bcnt2+acnt3)
		{
			printf("3");
		}
		else
		{
			printf("3+");
		}
	}
}
