#include<bits/stdc++.h>
using namespace std;
int n,k,h[150005],temp,ans,mn=15000001;
int main ()
{
	//Input 
	//n = number of planks
	//k = planks required to cut
	cin >> n >> k;
	//Input array of planks height
	for(int i=1;i<=n;i++)
	{
		cin >> h[i];
	}
	//Find minimum height of k planks
	for(int i=1;i<=n-k+1;i++)
	{
		temp=0;
		for(int j=i;j<=i+k-1;j++)
		{
			temp=temp+h[j];
		}
		if(temp<mn)
		{
			mn=temp;
			//Save index of the minimum number
			ans=i;
		}
	}
	//Output
	cout << ans;
	return 0;
}
