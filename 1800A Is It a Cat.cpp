#include<bits/stdc++.h>
using namespace std;
int t,n[10005],txt[10005][55],len[10005],status[10005];
int main ()
{
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
		scanf("%d",&n[i]);
		scanf("%s",txt[i]);
		len[i]=strlen(txt[i]);
		for(int j=0;j<len[i];j++)
		{
			if(txt[j]!='M'||txt[j]!='m'||txt[j]!='E'||txt[j]!='e'||txt[j]!='O'||txt[j]!='o'||txt[j]!='W'||txt[j]!='w')
			{
				status[i]=0;
				break;
			}
		}
	}
}
