#include<bits/stdc++.h>
using namespace std;
int t,d[6969][69];
char txt[6969][69];
int main ()
{
	//Input test cases
	cin >> t;
	//Input string in each test cases
	for(int i=1;i<=t;i++)
	{
		cin >> txt[i];
		//Convert Text to Integer
		for(int j=0;j<6;j++)
		{
			if(txt[i][j]=='1') d[i][j]=1;
			else if(txt[i][j]=='2') d[i][j]=2;
			else if(txt[i][j]=='3') d[i][j]=3;
			else if(txt[i][j]=='4') d[i][j]=4;
			else if(txt[i][j]=='5') d[i][j]=5;
			else if(txt[i][j]=='6') d[i][j]=6;
			else if(txt[i][j]=='7') d[i][j]=7;
			else if(txt[i][j]=='8') d[i][j]=8;
			else if(txt[i][j]=='9') d[i][j]=9;
			else if(txt[i][j]=='0') d[i][j]=0;
		}
	}
	//Output
	for(int i=1;i<=t;i++)
	{
		if(d[i][5]==d[i][0]+d[i][1]+d[i][2]-d[i][3]-d[i][4]) cout << "YES" << endl;
		else cout << "NO" << endl;
	}
	return 0;
}
