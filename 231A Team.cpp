#include<stdio.h>
int n,a[1005],b[1005],c[1005],cnt=0;
int main ()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d%d",&a[i],&b[i],&c[i]);
	}
	for(int i=1;i<=n;i++)
	{
		if(a[i]==0&&b[i]==0&&c[i]==0)
		{
			cnt=cnt;
		}
		else if(a[i]==1&&b[i]==0&&c[i]==0)
		{
			cnt=cnt;
		}
		else if(a[i]==0&&b[i]==1&&c[i]==0)
		{
			cnt=cnt;
		}
		else if(a[i]==0&&b[i]==0&&c[i]==1)
		{
			cnt=cnt;
		}
		else
		{
			cnt++;
		}
	}
	printf("%d",cnt);
}
