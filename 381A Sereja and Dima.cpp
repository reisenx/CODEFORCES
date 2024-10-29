#include<bits/stdc++.h>
using namespace std;
int n,a[1005],s=0,d=0;
int main ()
{
	//Input
	cin >> n;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i];
	}
	//Calculate the points
	for(int i=0;i<n;i++)
	{
		//Sereja's turn
		if(i%2==0)
		{
			//Case 1: The leftmost are greater than rightmost
			if(a[1]>=a[n-i])
			{
				//Sereja takes the leftmost card
				s=s+a[1];
				//Replace a[i] with a[i+1]
				for(int j=1;j<=n-i;j++)
				{
					a[j]=a[j+1];
				}
			}
			//Case 2: The rightmost are greater than leftmost
			else
			{
				//Sereja takes the rightmost card
				s=s+a[n-i];
				//Delete the rightmost card (a[n-i])
				a[n-i]='\0';
			}
		}
		//Dima's turn
		else
		{
			//Case 1: The leftmost are greater than rightmost
			if(a[1]>=a[n-i])
			{
				//Dima takes the leftmost card
				d=d+a[1];
				//Replace a[i] with a[i+1]
				for(int j=1;j<=n-i;j++)
				{
					a[j]=a[j+1];
				}
			}
			//Case 2: The rightmost are greater than leftmost
			else
			{
				//Dima takes the rightmost card
				d=d+a[n-i];
				//Delete the rightmost card (a[n-i])
				a[n-i]='\0';
			}
		}
	}
	//Output
	cout << s << " " << d;
}
