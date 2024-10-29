#include<bits/stdc++.h>
using namespace std;
int t,n[10005];
int main ()
{
	//Input number of test cases
	cin >> t;
	//Input number in each test case
	for(int i=1;i<=t;i++)
	{
		cin >> n[i];
	}
	//Output
	for(int i=1;i<=t;i++)
	{
		if(n[i]%3==0) cout << n[i]/3 << " " << n[i]/3 << endl;
		else if(n[i]%3==1) cout << (n[i]/3)+1 << " " << n[i]/3 << endl;
		else if(n[i]%3==2) cout << n[i]/3 << " " << (n[i]/3)+1 << endl;
	}
	return 0;
}
//We can divide 3n into 1*(n) and 2*(n)
//We can divide 3n+1 into 1*(n+1) and 2*(n)
//We can divide 3n+2 into 1*(n) and 2*(n+1)
