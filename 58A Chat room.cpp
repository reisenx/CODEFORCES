#include<bits/stdc++.h>
using namespace std;
int len,status=0;
char s[105];
int main ()
{
	//Input text
	cin >> s;
	//Find length of text
	len=strlen(s);
	for(int i=0;i<len;i++)
	{
		//If h is detected start checking
		if(status==0)
		{
			if(s[i]=='h') status=1;
		}
		//Checking for e
		else if(status==1)
		{
			//If not h or e then reset the process
			if(s[i]!='e'&&s[i]!='h') status=0;
			//If h is detected do nothing
			//If e is detected continue the process
			else if(s[i]=='e') status=2;
		}
		//Checking for double l
		else if(status==2)
		{
			//If not l or e then reset the process
			if(s[i]!='l'&&s[i]!='e') status=0;
			//If there're no double l the reset the process
			else if(s[i]=='l'&&s[i+1]!='l') status=0;
			//If double l is detected then continue the process and skip for 1 character
			else if(s[i]=='l'&&s[i+1]=='l')
			{
				status=3;
				continue;
			} 
		}
		else if(status==3)
		{
			//if not l or o then reset the process
			if(s[i]!='l'&&s[i]!='o') status=0;
			//if o is detected then done
			else if(s[i]!='o')
			{
				status=4;
				break;
			}
		}
	}
	//Output
	if(status==4) cout << "YES" << endl;
	else cout << "NO" << endl;
	return 0;
}
