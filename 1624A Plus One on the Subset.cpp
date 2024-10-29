#include<bits/stdc++.h>
using namespace std;
int t,n[10005],a[10005][55],mx[10005],mn[10005],ans[10005];
int main ()
{
	//Input number of test cases
	cin >> t;
	//Input array in each test case
	for(int i=1;i<=t;i++)
	{
		//Input how many numbers in that array
		cin >> n[i];
		//Input array
		mx[i]=0;
		mn[i]=1000000000;
		for(int j=1;j<=n[i];j++)
		{
			cin >> a[i][j];
			//Find maximum number in the array
			if(a[i][j]>mx[i]) mx[i]=a[i][j];
			//Find minimum number in the array
			if(a[i][j]<mn[i]) mn[i]=a[i][j];
		}
		//Calculate the answer
		ans[i]=mx[i]-mn[i];
	}
	//Output
	for(int i=1;i<=t;i++)
	{
		cout << ans[i] <<endl;
	}
	return 0;
}
