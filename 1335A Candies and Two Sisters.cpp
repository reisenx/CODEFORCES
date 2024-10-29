#include<stdio.h>
int t,n[10005];
int main ()
{
	//Input number of test cases
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
		//Input number of total candies
		scanf("%d",&n[i]);
		/*
		if total candies (x) is an odd number
		we can write x in 2n+1 form
		Maximum candies that Betty can get is n candies
		There will be n possible ways to distribute candies
		from x=2n+1
		(x-1)/2 = n
		So There will be (x-1)/2 possible ways to distribute candies
		*/
		if(n[i]%2!=0)
		{
			n[i]=(n[i]-1)/2;
		}
		/*
		if total candies (x) is an even number
		we can write x in 2n form
		Maximum candies that Betty can get is n-1 candies
		There will be n-1 possible ways to distribute candies
		from x=2n
		(x/2)-1 = n-1
		So There will be (x/2)-1 possible ways to distribute candies
		*/
		else
		{
			n[i]=(n[i]/2)-1;
		}
	}
	//Output
	for(int i=1;i<=t;i++)
	{
		printf("%d\n",n[i]);
	}
	return 0;
}
