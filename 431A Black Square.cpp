#include<bits/stdc++.h>
using namespace std;
int a[10],ans=0,len;
char s[100005];
int main ()
{
	//Input how many calories wasted (a[i]) when click i th square
	for(int i=1;i<=4;i++)
	{
		cin >> a[i];
	}
	//Input the sequence of clicked square
	cin >> s;
	//Find how many square were clicked
	len=strlen(s);
	//Calculate calories wasted
	for(int i=0;i<len;i++)
	{
		if(s[i]=='1')ans=ans+a[1];
		else if(s[i]=='2')ans=ans+a[2];
		else if(s[i]=='3')ans=ans+a[3];
		else if(s[i]=='4')ans=ans+a[4];
	}
	//Output
	cout << ans;
	return 0;
}
