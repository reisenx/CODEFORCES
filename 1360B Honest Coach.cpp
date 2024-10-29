#include<bits/stdc++.h>
using namespace std;
int t,n[1005],s[1005][55],ans[1005],temp;
int main ()
{
	//Input number of test cases
	cin >> t;
	for(int i=1;i<=t;i++)
	{
		ans[i]=1001;
		//Input how many number in array
		cin >> n[i];
		//Input array
		for(int j=1;j<=n[i];j++)
		{
			cin >> s[i][j];
		}
		//Sorting array from biggest to smallest
		for(int j=1;j<=n[i];j++)
		{
			for(int k=1;k<=n[i];k++)
			{
				if(s[i][j]>s[i][k])
				{
					temp=s[i][j];
					s[i][j]=s[i][k];
					s[i][k]=temp;
				}
			}
		}
		//Find smallest difference between max(A) and min(B)
		for(int j=1;j<n[i];j++)
		{
			if(s[i][j]-s[i][j+1]<ans[i]) ans[i]=s[i][j]-s[i][j+1];
		}
	}
	//Output
	for(int i=1;i<=t;i++)
	{
		cout << ans[i] << endl;
	}
	return 0;
}
