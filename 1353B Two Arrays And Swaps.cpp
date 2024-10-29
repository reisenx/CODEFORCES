#include<bits/stdc++.h>
using namespace std;
int t,n[205],m[205],a[205][35],b[205][35],s[205],temp;
int main ()
{
	//Input number of test cases
	cin >> t;
	//Input
	//n[i] = how many number in each array
	//k[i] = maximum move
	for(int i=1;i<=t;i++)
	{
		cin >> n[i] >> m[i];
		//Input array A and B
		for(int j=1;j<=n[i];j++)
		{
			cin >> a[i][j];
		}
		for(int j=1;j<=n[i];j++)
		{
			cin >> b[i][j];
		}
		//Sorting array A from smallest to biggest
		//Sorting array B from biggest to smallest
		for(int j=1;j<=n[i];j++)
		{
			for(int k=1;k<=n[i];k++)
			{
				if(a[i][j]<=a[i][k])
				{
					temp=a[i][j];
					a[i][j]=a[i][k];
					a[i][k]=temp;
				}
				if(b[i][j]>=b[i][k])
				{
					temp=b[i][j];
					b[i][j]=b[i][k];
					b[i][k]=temp;
				}
			}
		}
		//Exchange bigger number from array B to array A
		for(int j=1;j<=m[i];j++)
		{
			if(a[i][j]<=b[i][j])
			{
				temp=a[i][j];
				a[i][j]=b[i][j];
				b[i][j]=temp;
			}
		}
		//Find a sum on Array A
		for(int j=1;j<=n[i];j++)
		{
			s[i]=s[i]+a[i][j];
		}
	}
	//Output
	for(int i=1;i<=t;i++)
	{
		cout << s[i] << endl;
	}
	return 0;
}
