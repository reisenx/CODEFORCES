#include<bits/stdc++.h>
using namespace std;
int t,n[1005],a[1005][105],cnt[1005],mx[1005];
int main ()
{
	cin >> t;
	for(int i=1;i<=t;i++)
	{
		cin >> n[i];
		mx[i]=0;
		for(int j=1;j<=n[i];j++)
		{
			cin >> a[i][j];
			if(a[i][j]==0) cnt[i]++;
			else if(a[i][j]==1)
			{
				if(cnt[i]>mx[i]) mx[i]=cnt[i];
				cnt[i]=0;
			}
			
		}
	}
	for(int i=1;i<=t;i++)
	{
		if(cnt[i]>mx[i]) cout << cnt[i] << endl;
		else cout << mx[i] << endl;
	}
	return 0;
}