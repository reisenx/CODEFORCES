#include<stdio.h>
int s[10],cnt=0;
int main ()
{
	for(int i=1;i<=4;i++)
	{
		scanf("%d",&s[i]);
	}
	for(int i=1;i<=4;i++)
	{
		for(int j=i+1;j<=4;j++)
		{
			if(s[i]==s[j])
			{
				cnt++;
			}
		}
	}
	if(cnt==6)
	{
		printf("3");
	}
	else if(cnt==2||cnt==3)
	{
		printf("2");
	}
	else if(cnt==1)
	{
		printf("1");
	}
	else
	{
		printf("0");
	}
	return 0;
}
