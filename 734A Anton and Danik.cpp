#include<stdio.h>
int n,a=0,d=0;
char txt[100005];
int main ()
{
	scanf("%d",&n);
	scanf("%s",txt);
	for(int i=0;i<n;i++)
	{
		if(txt[i]=='A')
		{
			a++;
		}
		else if(txt[i]=='D')
		{
			d++;
		}
	}
	if(a==d)
	{
		printf("Friendship");
	}
	else if(a>d)
	{
		printf("Anton");
	}
	else if(a<d)
	{
		printf("Danik");
	}
	return 0;
}
