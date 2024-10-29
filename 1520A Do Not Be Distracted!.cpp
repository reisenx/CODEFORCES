#include<bits/stdc++.h>
using namespace std;
int t,n[1005];
char txt[1005][55];
//Create function to delete Duplicate characters
void DelDuplicate (int len,char st[55])
{
	cin >> len >> st;
	for(int i=0;i<len;i++)
	{
		if(st[i]==st[i+1])
		{
			//Replace st[i+1] with st[i+2] and so on
			for(int j=i+1;j<len;j++)
			{
				st[j]=st[j+1];
			}
		}
	}
}
int main ()
{
	//Input number of test cases
	cin >> t;
	//Input number of character and string in each test case
	for(int i=1;i<=t;i++)
	{
		cin >> n[i] >> txt[i];
		//Use function to delete duplicate characters
		DelDuplicate(n[i],txt[i]);
		cout << txt[i] << endl << endl;
	}
}
