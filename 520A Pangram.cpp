#include<stdio.h>
#include<ctype.h>
int n,cnt[30];
char txt[105];
int main ()
{
	scanf("%d%s",&n,txt);
	for(int i=0;i<n;i++)
	{
		if(txt[i]=='A'||txt[i]=='a')cnt[1]++;
		else if(txt[i]=='B'||txt[i]=='b')cnt[2]++;
		else if(txt[i]=='C'||txt[i]=='c')cnt[3]++;
		else if(txt[i]=='D'||txt[i]=='d')cnt[4]++;
		else if(txt[i]=='E'||txt[i]=='e')cnt[5]++;
		else if(txt[i]=='F'||txt[i]=='f')cnt[6]++;
		else if(txt[i]=='G'||txt[i]=='g')cnt[7]++;
		else if(txt[i]=='H'||txt[i]=='h')cnt[8]++;
		else if(txt[i]=='I'||txt[i]=='i')cnt[9]++;
		else if(txt[i]=='J'||txt[i]=='j')cnt[10]++;
		else if(txt[i]=='K'||txt[i]=='k')cnt[11]++;
		else if(txt[i]=='L'||txt[i]=='l')cnt[12]++;
		else if(txt[i]=='M'||txt[i]=='m')cnt[13]++;
		else if(txt[i]=='N'||txt[i]=='n')cnt[14]++;
		else if(txt[i]=='O'||txt[i]=='o')cnt[15]++;
		else if(txt[i]=='P'||txt[i]=='p')cnt[16]++;
		else if(txt[i]=='Q'||txt[i]=='q')cnt[17]++;
		else if(txt[i]=='R'||txt[i]=='r')cnt[18]++;
		else if(txt[i]=='S'||txt[i]=='s')cnt[19]++;
		else if(txt[i]=='T'||txt[i]=='t')cnt[20]++;
		else if(txt[i]=='U'||txt[i]=='u')cnt[21]++;
		else if(txt[i]=='V'||txt[i]=='v')cnt[22]++;
		else if(txt[i]=='W'||txt[i]=='w')cnt[23]++;
		else if(txt[i]=='X'||txt[i]=='x')cnt[24]++;
		else if(txt[i]=='Y'||txt[i]=='y')cnt[25]++;
		else if(txt[i]=='Z'||txt[i]=='z')cnt[26]++;
	}
	for(int i=1;i<=26;i++)
	{
		if(cnt[i]==0)
		{
			printf("NO");
			return 0;
		}
	}
	printf("YES");
	return 0;
}
