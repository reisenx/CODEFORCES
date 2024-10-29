#include<stdio.h>
#include<math.h>
int t,a[10005],b[10005],c[10005],e1[10005],e2[10005];
int main ()
{
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
		scanf("%d%d%d",&a[i],&b[i],&c[i]);
		e1[i]=a[i]-1;
		e2[i]=abs(b[i]-c[i])+(c[i]-1);
	}
	for(int i=1;i<=t;i++)
	{
		if(e1[i]<e2[i])
		{
			printf("1\n");
		}
		else if(e1[i]>e2[i])
		{
			printf("2\n");
		}
		else if(e1[i]==e2[i])
		{
			printf("3\n");
		}
	}
	return 0;
}
