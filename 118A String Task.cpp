#include<stdio.h>
#include<string.h>
int ln;
char txt[105];
int main()
{
	scanf("%s",txt);
	ln=strlen(txt);
	for(int i=0;i<ln;i++)
	{
		if(txt[i]=='B'||txt[i]=='b')printf(".b");
		else if(txt[i]=='C'||txt[i]=='c')printf(".c");
		else if(txt[i]=='D'||txt[i]=='d')printf(".d");
		else if(txt[i]=='F'||txt[i]=='f')printf(".f");
		else if(txt[i]=='G'||txt[i]=='g')printf(".g");
		else if(txt[i]=='H'||txt[i]=='h')printf(".h");
		else if(txt[i]=='J'||txt[i]=='j')printf(".j");
		else if(txt[i]=='K'||txt[i]=='k')printf(".k");
		else if(txt[i]=='L'||txt[i]=='l')printf(".l");
		else if(txt[i]=='M'||txt[i]=='m')printf(".m");
		else if(txt[i]=='N'||txt[i]=='n')printf(".n");
		else if(txt[i]=='P'||txt[i]=='p')printf(".p");
		else if(txt[i]=='Q'||txt[i]=='q')printf(".q");
		else if(txt[i]=='R'||txt[i]=='r')printf(".r");
		else if(txt[i]=='S'||txt[i]=='s')printf(".s");
		else if(txt[i]=='T'||txt[i]=='t')printf(".t");
		else if(txt[i]=='V'||txt[i]=='v')printf(".v");
		else if(txt[i]=='W'||txt[i]=='w')printf(".w");
		else if(txt[i]=='X'||txt[i]=='x')printf(".x");
		else if(txt[i]=='Z'||txt[i]=='z')printf(".z");
	}
}
