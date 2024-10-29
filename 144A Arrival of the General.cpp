#include<stdio.h>
int n,num[105],min=101,max=0,pmin,pmax;
int main ()
{
	//Input how many soldier
	scanf("%d",&n);
	//Input height of soldier
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&num[i]);
		//Find minimum height and maximum height
		if(num[i]<min)min=num[i];
		if(num[i]>max)max=num[i];
	}
	//Find position of soldier with minimum height
	for(int i=1;i<=n;i++)
	{
		if(num[i]==min)pmin=i;
	}
	//Find position of soldier with maximum height
	for(int i=n;i>=1;i--)
	{
		if(num[i]==max)pmax=i;
	}
	//Output how many second to swap
	if(pmax<pmin)printf("%d",(n-pmin)+(pmax-1));
	/*If tallest soldier is in front of shortest soldier
	There will be 1 time that they swap each other*/ 
	else if(pmax>pmin)printf("%d",(n-pmin)+(pmax-1)-1);
	return 0;
}
