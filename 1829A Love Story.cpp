#include<bits/stdc++.h>
using namespace std;
int t,ans[1005];
char txt[1005][15];
int main ()
{
	cin >> t;
	for(int i=1;i<=t;i++)
	{
		cin >> txt[i];
		ans[i]=0;
		if(txt[i][0]=='c') ans[i]++;
		if(txt[i][1]=='o') ans[i]++;
		if(txt[i][2]=='d') ans[i]++;
		if(txt[i][3]=='e') ans[i]++;
		if(txt[i][4]=='f') ans[i]++;
		if(txt[i][5]=='o') ans[i]++;
		if(txt[i][6]=='r') ans[i]++;
		if(txt[i][7]=='c') ans[i]++;
		if(txt[i][8]=='e') ans[i]++;
		if(txt[i][9]=='s') ans[i]++;
	}
	for(int i=1;i<=t;i++)
	{
		cout << 10-ans[i] << endl;
	}
	return 0;
}
