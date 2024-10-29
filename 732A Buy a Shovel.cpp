#include<stdio.h>
int k,r,ans;
int main ()
{
	scanf("%d%d",&k,&r);
	if(k%10==1)
	{
		ans=r;
	}
	else if(k%10==2)
	{
		if(r==2)
		{
			ans=1;
		}
		else if(r==4)
		{
			ans=2;
		}
		else if(r==6)
		{
			ans=3;
		}
		else if(r==8)
		{
			ans=4;
		}
		else
		{
			ans=5;
		}
	}
	else if(k%10==3)
	{
		if(r==3)
		{
			ans=1;
		}
		else if(r==6)
		{
			ans=2;
		}
		else if(r==9)
		{
			ans=3;
		}
		else if(r==2)
		{
			ans=4;
		}
		else if(r==5)
		{
			ans=5;
		}
		else if(r==8)
		{
			ans=6;
		}
		else if(r==1)
		{
			ans=7;
		}
		else if(r==4)
		{
			ans=8;
		}
		else if(r==7)
		{
			ans=9;
		}
	}
	else if(k%10==4)
	{
		if(r==4)
		{
			ans=1;
		}
		else if(r==8)
		{
			ans=2;
		}
		else if(r==2)
		{
			ans=3;
		}
		else if(r==6)
		{
			ans=4;
		}
		else
		{
			ans=5;
		}
	}
	else if(k%10==5)
	{
		if(r==5)
		{
			ans=1;
		}
		else
		{
			ans=2;
		}
	}
	else if(k%10==6)
	{
		if(r==6)
		{
			ans=1;
		}
		else if(r==2)
		{
			ans=2;
		}
		else if(r==8)
		{
			ans=3;
		}
		else if(r==4)
		{
			ans=4;
		}
		else
		{
			ans=5;
		}
	}
	else if(k%10==7)
	{
		if(r==7)
		{
			ans=1;
		}
		else if(r==4)
		{
			ans=2;
		}
		else if(r==1)
		{
			ans=3;
		}
		else if(r==8)
		{
			ans=4;
		}
		else if(r==5)
		{
			ans=5;
		}
		else if(r==2)
		{
			ans=6;
		}
		else if(r==9)
		{
			ans=7;
		}
		else if(r==6)
		{
			ans=8;
		}
		else if(r==3)
		{
			ans=9;
		}
	}
	else if(k%10==8)
	{
		if(r==8)
		{
			ans=1;
		}
		else if(r==6)
		{
			ans=2;
		}
		else if(r==4)
		{
			ans=3;
		}
		else if(r==2)
		{
			ans=4;
		}
		else
		{
			ans=5;
		}
	}
	else if(k%10==9)
	{
		ans=10-r;
	}
	else
	{
		ans=1;
	}
	printf("%d",ans);
}
