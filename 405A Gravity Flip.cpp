#include<bits/stdc++.h>
using namespace std;
int n,a[105],temp;
int main ()
{
	//Input how many column in the box
	scanf("%d",&n);
	//Input number of block in each column
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	//Sorting number from smallest to largest
	for(int i=1;i<=n;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			if(a[j]<a[i])
			{
				temp=a[j];
				a[j]=a[i];
				a[i]=temp;
			}
		}
	}
	//Output
	for(int i=1;i<=n;i++)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
