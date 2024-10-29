#include<bits/stdc++.h>
using namespace std;
int t,r[10005];
int main ()
{
	//Input test cases
	cin >> t;
	//Input rating in each test cases
	for(int i=1;i<=t;i++)
	{
		cin >> r[i];
	}
	//Output
	for(int i=1;i<=t;i++)
	{
		if(r[i]>=1900) cout << "Division 1" << endl;
		else if(r[i]>=1600&&r[i]<=1899) cout << "Division 2" << endl;
		else if(r[i]>=1400&&r[i]<=1599) cout << "Division 3" << endl;
		else if(r[i]<=1399) cout << "Division 4" << endl;
	}
	return 0;
}
