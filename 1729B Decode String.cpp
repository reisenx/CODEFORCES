#include<stdio.h>
int n,cnt=0,len[10005];
char txt[10005][55],ans[10005][55],temp[10];
int main()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&len[i]);
		scanf("%s",txt[i]);
		for(int j=len[i]-1;j>=0;j--)
		{
			if(txt[i][j]=='0')
			{
				if(txt[i][j-2]=='1'&&txt[i][j-1]=='0')ans[i][cnt]='j';
				else if(txt[i][j-2]=='1'&&txt[i][j-1]=='1')ans[i][cnt]='k';
				else if(txt[i][j-2]=='1'&&txt[i][j-1]=='2')ans[i][cnt]='l';
				else if(txt[i][j-2]=='1'&&txt[i][j-1]=='3')ans[i][cnt]='m';
				else if(txt[i][j-2]=='1'&&txt[i][j-1]=='4')ans[i][cnt]='n';
				else if(txt[i][j-2]=='1'&&txt[i][j-1]=='5')ans[i][cnt]='o';
				else if(txt[i][j-2]=='1'&&txt[i][j-1]=='6')ans[i][cnt]='p';
				else if(txt[i][j-2]=='1'&&txt[i][j-1]=='7')ans[i][cnt]='q';
				else if(txt[i][j-2]=='1'&&txt[i][j-1]=='8')ans[i][cnt]='r';
				else if(txt[i][j-2]=='1'&&txt[i][j-1]=='9')ans[i][cnt]='s';
				else if(txt[i][j-2]=='2'&&txt[i][j-1]=='0')ans[i][cnt]='t';
				else if(txt[i][j-2]=='2'&&txt[i][j-1]=='1')ans[i][cnt]='u';
				else if(txt[i][j-2]=='2'&&txt[i][j-1]=='2')ans[i][cnt]='v';
				else if(txt[i][j-2]=='2'&&txt[i][j-1]=='3')ans[i][cnt]='w';
				else if(txt[i][j-2]=='2'&&txt[i][j-1]=='4')ans[i][cnt]='x';
				else if(txt[i][j-2]=='2'&&txt[i][j-1]=='5')ans[i][cnt]='y';
				else if(txt[i][j-2]=='2'&&txt[i][j-1]=='6')ans[i][cnt]='z';
				cnt++;
				j=j-2;
			}
			else if(txt[i][j]=='1')
			{
				ans[i][cnt]='a';
				cnt++;
			}
			else if(txt[i][j]=='2')
			{
				ans[i][cnt]='b';
				cnt++;
			}
			else if(txt[i][j]=='3')
			{
				ans[i][cnt]='c';
				cnt++;
			}
			else if(txt[i][j]=='4')
			{
				ans[i][cnt]='d';
				cnt++;
			}
			else if(txt[i][j]=='5')
			{
				ans[i][cnt]='e';
				cnt++;
			}
			else if(txt[i][j]=='6')
			{
				ans[i][cnt]='f';
				cnt++;
			}
			else if(txt[i][j]=='7')
			{
				ans[i][cnt]='g';
				cnt++;
			}
			else if(txt[i][j]=='8')
			{
				ans[i][cnt]='h';
				cnt++;
			}
			else if(txt[i][j]=='9')
			{
				ans[i][cnt]='i';
				cnt++;
			}
		}
		for(int j=0;j<cnt;j++)
		{
			for(int k=j+1;k<cnt;k++)
			{
				temp[0]=ans[i][k];
				ans[i][k]=ans[i][j];
				ans[i][j]=temp[0];
			}
		}
		cnt=0;
	}
	for(int i=1;i<=n;i++)
	{
		printf("%s\n",ans[i]);
	}
	return 0;
}
