#include<bits/stdc++.h>
using namespace std;
int t,a[10005],b[10005];
int main ()
{
	cin >> t;
	for(int i=1;i<=t;i++)
	{
		cin >> a[i] >> b[i];
	}
	for(int i=1;i<=t;i++)
	{
		if(max(a[i],b[i])>=min(a[i],b[i])*2) cout << max(a[i],b[i])*max(a[i],b[i]) << endl;
		else cout << min(a[i],b[i])*min(a[i],b[i])*4 << endl;
	}
	return 0;
}
