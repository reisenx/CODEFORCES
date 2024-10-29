#include<bits/stdc++.h>
using namespace std;
int t,n[10005],a[10005][105],cnt1[10005],cnt2[10005],status[10005];
int main ()
{
	//Input number of test cases
	cin >> t;
	//Input array in each test case
	for(int i=1;i<=t;i++)
	{
		status[i]=0;
		cnt1[i]=0;
		cnt2[i]=0;
		//Input how many candies in each array
		cin >> n[i];
		for(int j=1;j<=n[i];j++)
		{
			cin >> a[i][j];
			//Count how many 1 g and 2 g candies in the array
			if(a[i][j]==1) cnt1[i]++;
			else if(a[i][j]==2) cnt2[i]++;
		}
		//Case 1: there's no 1 g candy
		if(cnt1[i]==0)
		{
			if(cnt2[i]%2==0) status[i]=1;
		}
		//Case 2: there's no 2 g candy
		else if(cnt2[i]==0)
		{
			if(cnt2[i]%2==0) status[i]=1;
		}
		//Case 3: there're both 1 g and 2 g candy
		else
		{
			//Given j is a number of 1 g candy
			//Given k is a number of 2 g candy
			//If the candy can be divide into 2 group so
			//j+(2*k)=(cnt1[i]-j)+(2*(cnt2[i]-k))
			for(int j=1;j<=cnt1[i];j++)
			{
				for(int k=1;k<=cnt2[i];k++)
				{
					if(j==(cnt1[i]-j)+(2*(cnt2[i]-k))-(2*k))
					{
						status[i]=1;
						break;
					}
				}
				if(status[i]==1) break;
			}
		}
	}
	//Output
	for(int i=1;i<=t;i++)
	{
		if(status[i]==0) cout << "NO" << endl;
		else if(status[i]==1) cout << "YES" << endl;
	}
	return 0;
}
