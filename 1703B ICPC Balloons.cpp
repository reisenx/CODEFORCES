#include<stdio.h>
int n,ln[105],cnt[105][30],ans[105];
char txt[105][55];
int main ()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%s",&ln[i],txt[i]);
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<ln[i];j++)
		{
			if(txt[i][j]=='A')cnt[i][1]++;
			else if(txt[i][j]=='B')cnt[i][2]++;
			else if(txt[i][j]=='C')cnt[i][3]++;
			else if(txt[i][j]=='D')cnt[i][4]++;
			else if(txt[i][j]=='E')cnt[i][5]++;
			else if(txt[i][j]=='F')cnt[i][6]++;
			else if(txt[i][j]=='G')cnt[i][7]++;
			else if(txt[i][j]=='H')cnt[i][8]++;
			else if(txt[i][j]=='I')cnt[i][9]++;
			else if(txt[i][j]=='J')cnt[i][10]++;
			else if(txt[i][j]=='K')cnt[i][11]++;
			else if(txt[i][j]=='L')cnt[i][12]++;
			else if(txt[i][j]=='M')cnt[i][13]++;
			else if(txt[i][j]=='N')cnt[i][14]++;
			else if(txt[i][j]=='O')cnt[i][15]++;
			else if(txt[i][j]=='P')cnt[i][16]++;
			else if(txt[i][j]=='Q')cnt[i][17]++;
			else if(txt[i][j]=='R')cnt[i][18]++;
			else if(txt[i][j]=='S')cnt[i][19]++;
			else if(txt[i][j]=='T')cnt[i][20]++;
			else if(txt[i][j]=='U')cnt[i][21]++;
			else if(txt[i][j]=='V')cnt[i][22]++;
			else if(txt[i][j]=='W')cnt[i][23]++;
			else if(txt[i][j]=='X')cnt[i][24]++;
			else if(txt[i][j]=='Y')cnt[i][25]++;
			else if(txt[i][j]=='Z')cnt[i][26]++;
		}
	}
	for(int i=1;i<=n;i++)
	{
		ans[i]=0;
		for(int j=1;j<=26;j++)
		{
			if(cnt[i][j]!=0)
			{
				ans[i]=ans[i]+2+(cnt[i][j]-1);
			}
		}
		printf("%d\n",ans[i]);
	}
}
