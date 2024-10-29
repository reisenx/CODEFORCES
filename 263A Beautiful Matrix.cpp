#include<stdio.h>
#include<math.h>
int mt[100][100],ans=-1;
int main ()
{
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		{
			scanf("%d",&mt[i][j]);
		}
	}
	for(int i=1;i<=5;i++)
	{
		if(ans!=-1)
		{
			break;	
		}
		else
		{
			for(int j=1;j<=5;j++)
			{	
				if(mt[i][j]==1)
				{
					ans=abs(3-i)+abs(3-j);
					break;
				}
			}
		}	
	}
	printf("%d",ans);
}
