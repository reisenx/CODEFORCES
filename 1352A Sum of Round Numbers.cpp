#include<stdio.h>
int t,n[10005],cnt[10005],temp;
int main ()
{
	//Input number of test cases
	scanf("%d",&t);
	//Input number of each test case
	for(int i=1;i<=t;i++)
	{
		scanf("%d",&n[i]);
		//Put the value of n[i] to temp
		temp=n[i];
		//Count how many summands are in each test case start from 10000, 1000, 100, 10, 1
		for(int j=10000;j>=1;j=j/10)
		{
			//if there's not 0 in that digits then count
			if(temp/j!=0)cnt[i]++;
			//Delete that digit
			temp=temp%j;
		}
	}
	//Output
	for(int i=1;i<=t;i++)
	{
		//Output number of summands
		printf("%d\n",cnt[i]);
		for(int j=10000;j>=1;j=j/10)
		{
			//Output that digit and multiple by the value of that digit
			if(n[i]/j!=0)printf("%d ",(n[i]/j)*j);
			//Delete that digit
			n[i]=n[i]%j;
		}
		printf("\n");
	}
	return 0;
}
