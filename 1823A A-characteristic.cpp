#include<bits/stdc++.h>
using namespace std;
int t,n[105],k[105],status[105],pos[105],neg[105];
int main ()
{
	//Input number of test case
	scanf("%d",&t);
	//Input length of the array (n)
	//Input number of A-characteristic (k)
	for(int i=1;i<=t;i++)
	{
		scanf("%d%d",&n[i],&k[i]);
		//Test all possible array
		for(int j=0;j<=n[i];j++)
		{
			//status[i] = 0 means there's no possible way
			//status[i] = 1 means there's a possible way
			status[i]=0;
			//assume that j is the number of 1 in array
			//so n[i]-j is the number of -1 in array
			//there're ((j-1)*j)/2 ways to pair 1 (product = 1)
			//there're (((n[i]-j)-1)*(n[i]-j))/2 ways to pair -1 (product = 1)
			if(k[i]==(((j-1)*j)/2)+(((n[i]-j)-1)*(n[i]-j))/2)
			{
				status[i]=1;
				pos[i]=j;
				neg[i]=n[i]-j;
				break;
			}
		}
	}
	//Output
	for(int i=1;i<=t;i++)
	{
		//Check status
		if(status[i]==0)
		{
			printf("NO\n");
		}
		else
		{
			printf("YES\n");
			//Output -1
			for(int j=1;j<=neg[i];j++)
			{
				printf("-1 ");
			}
			//Output 1
			for(int j=1;j<=pos[i];j++)
			{
				printf("1 ");
			}
			printf("\n");
		}
	}
	return 0;
}
