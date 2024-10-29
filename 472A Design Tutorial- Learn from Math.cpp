#include<bits/stdc++.h>
using namespace std;
int n,comp[1000005],cnt=0;
int main ()
{
	//Input number
	scanf("%d",&n);
	//Find all composite numbers from 1-n
	//A composite number is the number that is not a prime number
	//First composite number is 4
	for(int i=4;i<=n;i++)
	{
		//Loop divisor (j) from 2 to sqrt(n)
		//If the number (i) can divided by divisor (j) so it is composite number
		for(int j=2;j<=sqrt(i);j++)
		{
			//If that number is a composite number put the value in comp[i] array then break loop
			if(i%j==0)
			{
				cnt++;
				comp[cnt]=i;
				break;
			}
		}
	}
	//Output 2 composite numbers that their sum is the same with the input number (n)
	for(int i=1;i<=cnt;i++)
	{
		for(int j=1;j<=cnt;j++)
		{
			if(n==comp[i]+comp[j])
			{
				printf("%d %d",comp[i],comp[j]);
				return 0;
			}
		}
	}
}
