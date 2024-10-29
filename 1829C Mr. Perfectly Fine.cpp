#include<bits/stdc++.h>
using namespace std;
char s[1005][200005][10];
int t,n[1005],m[1005][200005],mn1[1005],mn2[1005],mn3[1005];	
int main ()
{
	cin >> t;
	for(int i=1;i<=t;i++)
	{
		cin >> n[i];
		for(int j=1;j<=n[i];j++)
		{
			cin >> m[i][j] >> s[i][j];
		}
		mn1[i]=200001;
		mn2[i]=200001;
		mn3[i]=200001;
		for(int j=1;j<=n[i];j++)
		{
			if(s[i][j][0]=='1'&&s[i][j][1]=='1')
			{
				if(m[i][j]<mn1[i]) mn1[i]=m[i][j];
			}
			else if(s[i][j][0]=='1'&&s[i][j][1]=='0')
			{
				if(m[i][j]<mn2[i]) mn2[i]=m[i][j];
			}
			else if(s[i][j][0]=='0'&&s[i][j][1]=='1')
			{
				if(m[i][j]<mn3[i]) mn3[i]=m[i][j];
			}
		}
	}
	for(int i=1;i<=t;t++)
	{
		cout << "A" << endl;
//		cout << mn1[i] << " " << mn2[i] << " " << mn3[i] << endl;
//		if(mn1[i]==200001&&max(mn2[i],mn3[i])==200001)
//		{
//			cout << -1 << endl;
//		}
//		else if(mn1[i]==200001&&max(mn2[i],mn3[i])!=200001)
//		{
//			cout << mn2[i]+mn3[i] << endl;
//		}
//		else 
//		{
//			cout << mn1[i] << endl;
//		}
	}
	return 0;
}
