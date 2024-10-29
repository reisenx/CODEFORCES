#include<stdio.h>
int n,cnt[30],count=0,ans[10005];
char txt[10005][100];
int main ()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%s",txt[i]);
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=200005;j++)
		{
			if(txt[i][j]=='a')
			{
				cnt[1]=1;
			}
			else if(txt[i][j]=='b')
			{
				cnt[2]=1;
			}
			else if(txt[i][j]=='c')
			{
				cnt[3]=1;
			}
			else if(txt[i][j]=='d')
			{
				cnt[4]=1;
			}
			else if(txt[i][j]=='e')
			{
				cnt[5]=1;
			}
			else if(txt[i][j]=='f')
			{
				cnt[6]=1;
			}
			else if(txt[i][j]=='g')
			{
				cnt[7]=1;
			}
			else if(txt[i][j]=='h')
			{
				cnt[8]=1;
			}
			else if(txt[i][j]=='i')
			{
				cnt[9]=1;
			}
			else if(txt[i][j]=='j')
			{
				cnt[10]=1;
			}
			else if(txt[i][j]=='k')
			{
				cnt[11]=1;
			}
			else if(txt[i][j]=='l')
			{
				cnt[12]=1;
			}
			else if(txt[i][j]=='m')
			{
				cnt[13]=1;
			}
			else if(txt[i][j]=='n')
			{
				cnt[14]=1;	
			}
			else if(txt[i][j]=='o')
			{
				cnt[15]=1;
			}
			else if(txt[i][j]=='p')
			{
				cnt[16]=1;
			}
			else if(txt[i][j]=='q')
			{
				cnt[17]=1;
			}
			else if(txt[i][j]=='r')
			{
				cnt[18]=1;
			}
			else if(txt[i][j]=='s')
			{
				cnt[19]=1;
			}
			else if(txt[i][j]=='t')
			{
				cnt[20]=1;
			}
			else if(txt[i][j]=='u')
			{
				cnt[21]=1;
			}
			else if(txt[i][j]=='v')
			{
				cnt[22]=1;	
			}
			else if(txt[i][j]=='w')
			{
				cnt[23]=1;
			}
			else if(txt[i][j]=='x')
			{
				cnt[24]=1;
			}
			else if(txt[i][j]=='y')
			{
				cnt[25]=1;
			}
			else if(txt[i][j]=='z')
			{
				cnt[26]=1;
			}
		}
		for(int j=1;j<=26;j++)
		{
			count=count+cnt[j];
		}
		for(int j=1;j<=26;j++)
		{
			cnt[j]==0;
		}
		if(count%3!=0)
		{
			ans[i]=(count/3)+1;
		}
		else
		{
			ans[i]=count/3;
		}
		printf("%d\n",ans[i]);
		count=0;
	}
}
