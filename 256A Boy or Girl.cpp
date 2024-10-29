#include<stdio.h>
int n[500],temp=0,i=0,ans=0;
char z[10005];

int main ()
{
	scanf("%s",z);
	while(z[i]!='\0')
	{
		n[z[i]]=1;
		temp=0;
		i++;
	}
	for(int i=0;i<=500;i++)
	{
		ans=ans+n[i];
	}
	if(ans%2==0)
	{
		printf("CHAT WITH HER!");
	}
	else
	{
		printf("IGNORE HIM!");
	}
}
