#include<bits/stdc++.h>
using namespace std;
int n,t,a[30005],ind=1,status=0;
int main ()
{
	//Input
	//n = number of cells (count from 1 to n)
	//i = index of cell that want to go
	cin >> n >> t;
	//Input the number of each cells (a[i])
	for(int i=1;i<n;i++)
	{
		cin >> a[i];
	}
	//start from ind = 1
	//Transport until reach t th cell
	while(ind<t)
	{
		//Transport from i to i+a[i] cells
		ind=ind+a[ind];
		//If reach t th cells status=true
		if(ind==t) status=1;
	}
	if(status==0) cout << "NO";
	else if(status==1) cout << "YES";
	return 0;
}
