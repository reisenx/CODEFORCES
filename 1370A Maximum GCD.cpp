#include<bits/stdc++.h>
using namespace std;
int t,n[105];
int main ()
{
	cin >> t;
	for(int i=1;i<=t;i++)
	{
		cin >> n[i];
	}
	for(int i=1;i<=t;i++)
	{
		cout << floor(sqrt(n[i])) << endl;
	}
}
