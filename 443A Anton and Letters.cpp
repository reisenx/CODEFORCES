#include<stdio.h>
#include<string.h>
int len,cnt[35],ans=0;
char txt[1005];
int main ()
{
	scanf("%s",txt);
	len=strlen(txt);
	printf("%d",len);
//	for(int i=0;i<len;i++)
//	{
//		for(int j=97;j<=122;j++)
//		{
//			if(txt[i]==j)
//			{
//				cnt[j-96]=1;
//			}
//		}
//	}
//	for(int i=1;i<=26;i++)
//	{
//		ans=ans+cnt[i];
//	}
//	printf("%d",ans);
//	return 0;
}
