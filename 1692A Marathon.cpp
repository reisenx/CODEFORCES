#include<bits/stdc++.h>
using namespace std;
int t,d[10005][10],ans[10005];
int main ()
{
	//Input number of test cases
	cin >> t;
	//Input distance of the participants of each test case
	for(int i=1;i<=t;i++)
	{
		for(int j=1;j<=4;j++)
		{
			cin >> d[i][j];
			//Check if there're participant who ran longer distance than Timur
			if(j>=2&&d[i][j]>d[i][1]) ans[i]++;
		}
	}
	//Output
	for(int i=1;i<=t;i++)
	{
		cout << ans[i] << endl;
	}
	return 0;
}
