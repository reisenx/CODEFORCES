#include<bits/stdc++.h>
using namespace std;
int a,b,c,ans[10],mx=0;
int main ()
{
	//Input number
	scanf("%d%d%d",&a,&b,&c);
	//Find possible answer
	ans[1]=a+b+c;
	ans[2]=(a+b)*c;
	ans[3]=a*(b+c);
	ans[4]=a*b*c;
	//Find and output maximum number
	for(int i=1;i<=4;i++)
	{
		if(ans[i]>=mx)
		{
			mx=ans[i];
		}
	}
	printf("%d",mx);
	return 0;
}
