#include<stdio.h>
int n,cnt=0,lucnum[20],status=0;
int main()
{
	for(int i=1;i<=1000;i++)
	{
		if(i/100==4||i/100==7)
		{
			if((i%100)/10==4||(i%100)/10==7)
			{
				if((i%10)==4||(i%10)==7)
				{
					cnt++;
					lucnum[cnt]=i;
				}
			}
		}
		else if(i/10==4||i/10==7)
		{
			if(i%10==4||i%10==7)
			{
				cnt++;
				lucnum[cnt]=i;
			}
		}
		else if(i==4||i==7)
		{
			cnt++;
			lucnum[cnt]=i;
		}
	}
	scanf("%d",&n);
	if(n/100==4||n/100==7)
	{
		if((n%100)/10==4||(n%100)/10==7)
		{
			if((n%10)==4||(n%10)==7)
			{
				status=1;
			}
			else
			{
				status=0;
			}
		}
		else
		{
			status=0;
		}
	}
	else if(n/10==4||n/10==7)
	{
		if(n%10==4||n%10==7)
		{
			status=1;
		}
		else
		{
			status=0;
		}
	}
	else if(n==4||n==7)
	{
		status==1;
	}
	else
	{
		status==0;
	}
	if(status==1)
	{
		printf("YES");
	}
	else if(status==0)
	{
		for(int i=1;i<=14;i++)
		{
			if(n%lucnum[i]==0)
			{
				printf("YES");
				return 0;
			}
		}
		printf("NO");
	}
}
