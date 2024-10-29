#include<stdio.h>
#include<string.h>
int ln1,ln2,ln3,cnt1[30],cnt2[30],cnt3[30];
char txt1[105],txt2[105],txt3[105];
int main ()
{
	scanf("%s%s%s",txt1,txt2,txt3);
	ln1=strlen(txt1);
	ln2=strlen(txt2);
	ln3=strlen(txt3);
	if(ln3!=ln1+ln2)
	{
		printf("NO");
		return 0;
	}
	else if(ln3==ln1+ln2)
	{
		for(int i=0;i<ln1;i++)
		{
			if(txt1[i]=='A')cnt1[1]++;
			else if(txt1[i]=='B')cnt1[2]++;
			else if(txt1[i]=='C')cnt1[3]++;
			else if(txt1[i]=='D')cnt1[4]++;
			else if(txt1[i]=='E')cnt1[5]++;
			else if(txt1[i]=='F')cnt1[6]++;
			else if(txt1[i]=='G')cnt1[7]++;
			else if(txt1[i]=='H')cnt1[8]++;
			else if(txt1[i]=='I')cnt1[9]++;
			else if(txt1[i]=='J')cnt1[10]++;
			else if(txt1[i]=='K')cnt1[11]++;
			else if(txt1[i]=='L')cnt1[12]++;
			else if(txt1[i]=='M')cnt1[13]++;
			else if(txt1[i]=='N')cnt1[14]++;
			else if(txt1[i]=='O')cnt1[15]++;
			else if(txt1[i]=='P')cnt1[16]++;
			else if(txt1[i]=='Q')cnt1[17]++;
			else if(txt1[i]=='R')cnt1[18]++;
			else if(txt1[i]=='S')cnt1[19]++;
			else if(txt1[i]=='T')cnt1[20]++;
			else if(txt1[i]=='U')cnt1[21]++;
			else if(txt1[i]=='V')cnt1[22]++;
			else if(txt1[i]=='W')cnt1[23]++;
			else if(txt1[i]=='X')cnt1[24]++;
			else if(txt1[i]=='Y')cnt1[25]++;
			else if(txt1[i]=='Z')cnt1[26]++;
		}
		for(int i=0;i<ln2;i++)
		{
			if(txt2[i]=='A')cnt2[1]++;
			else if(txt2[i]=='B')cnt2[2]++;
			else if(txt2[i]=='C')cnt2[3]++;
			else if(txt2[i]=='D')cnt2[4]++;
			else if(txt2[i]=='E')cnt2[5]++;
			else if(txt2[i]=='F')cnt2[6]++;
			else if(txt2[i]=='G')cnt2[7]++;
			else if(txt2[i]=='H')cnt2[8]++;
			else if(txt2[i]=='I')cnt2[9]++;
			else if(txt2[i]=='J')cnt2[10]++;
			else if(txt2[i]=='K')cnt2[11]++;
			else if(txt2[i]=='L')cnt2[12]++;
			else if(txt2[i]=='M')cnt2[13]++;
			else if(txt2[i]=='N')cnt2[14]++;
			else if(txt2[i]=='O')cnt2[15]++;
			else if(txt2[i]=='P')cnt2[16]++;
			else if(txt2[i]=='Q')cnt2[17]++;
			else if(txt2[i]=='R')cnt2[18]++;
			else if(txt2[i]=='S')cnt2[19]++;
			else if(txt2[i]=='T')cnt2[20]++;
			else if(txt2[i]=='U')cnt2[21]++;
			else if(txt2[i]=='V')cnt2[22]++;
			else if(txt2[i]=='W')cnt2[23]++;
			else if(txt2[i]=='X')cnt2[24]++;
			else if(txt2[i]=='Y')cnt2[25]++;
			else if(txt2[i]=='Z')cnt2[26]++;
		}
		for(int i=0;i<ln3;i++)
		{
			if(txt3[i]=='A')cnt3[1]++;
			else if(txt3[i]=='B')cnt3[2]++;
			else if(txt3[i]=='C')cnt3[3]++;
			else if(txt3[i]=='D')cnt3[4]++;
			else if(txt3[i]=='E')cnt3[5]++;
			else if(txt3[i]=='F')cnt3[6]++;
			else if(txt3[i]=='G')cnt3[7]++;
			else if(txt3[i]=='H')cnt3[8]++;
			else if(txt3[i]=='I')cnt3[9]++;
			else if(txt3[i]=='J')cnt3[10]++;
			else if(txt3[i]=='K')cnt3[11]++;
			else if(txt3[i]=='L')cnt3[12]++;
			else if(txt3[i]=='M')cnt3[13]++;
			else if(txt3[i]=='N')cnt3[14]++;
			else if(txt3[i]=='O')cnt3[15]++;
			else if(txt3[i]=='P')cnt3[16]++;
			else if(txt3[i]=='Q')cnt3[17]++;
			else if(txt3[i]=='R')cnt3[18]++;
			else if(txt3[i]=='S')cnt3[19]++;
			else if(txt3[i]=='T')cnt3[20]++;
			else if(txt3[i]=='U')cnt3[21]++;
			else if(txt3[i]=='V')cnt3[22]++;
			else if(txt3[i]=='W')cnt3[23]++;
			else if(txt3[i]=='X')cnt3[24]++;
			else if(txt3[i]=='Y')cnt3[25]++;
			else if(txt3[i]=='Z')cnt3[26]++;
		}
		for(int i=1;i<=26;i++)
		{
			if(cnt3[i]!=cnt1[i]+cnt2[i])
			{
				printf("NO");
				return 0;
			}
		}
		printf("YES");
		return 0;
	}
}
