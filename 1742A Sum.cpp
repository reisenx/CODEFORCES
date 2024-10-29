#include<bits/stdc++.h>
using namespace std;
int t,n[10005][10],status[10005];
int main ()
{
	//Input number of test cases
	cin >> t;
	//Input 3 numbers of each test case
	for(int i=1;i<=t;i++)
	{
		for(int j=1;j<=3;j++)
		{
			cin >> n[i][j];
		}
		//Check if one of the number is the sum of the other two
		//If yes status[i] = 1 (YES)
		//If no status[i] = 0 (NO)
		if(n[i][1]==n[i][2]+n[i][3]||n[i][2]==n[i][1]+n[i][3]||n[i][3]==n[i][1]+n[i][2]) status[i]=1;
		else status[i]=0;
	}
	for(int i=1;i<=t;i++)
	{
		if(status[i]==0) cout << "NO" << endl;
		else if(status[i]==1) cout << "YES" << endl;
	}
	return 0;
}
