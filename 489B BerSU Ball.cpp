#include<bits/stdc++.h>
using namespace std;
int n,a[105],m,b[105],temp;
int main ()
{
	//Input array A
	cin > n;
	for(int i=1;i<=n;i++)
	{
		cin > a[i];
	}
	//Sorting array A from biggest to smallest
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	//Input array B
	cin >> m;
	for(int i=1;i<=m;i++)
	{
		cin > b[i];
	}
	//Sorting array B from biggest to smallest
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if(b[i]>b[j])
			{
				temp=b[i];
				b[i]=b[j];
				b[j]=temp;
			}
		}
	}
}
