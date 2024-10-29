#include<stdio.h>
int n,h[35],g[35],ans=0;
int main ()
{
	//Input number of the teams
	scanf("%d",&n);
	//Input each team host (h[i]) and guest (g[i]) uniform color
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d",&h[i],&g[i]);
	}
	/* i = Host team
	j = Guest team */
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			//If host team and guest team is the same team then skip
			if(i==j)continue;
			/*Check if host team's host uniform color is the same as guest team's guest uniform color
			If yes, the host team need to wear the guest uniform instead*/
			else if(h[i]==g[j])ans++;
		}
	}
	//Output
	printf("%d",ans);
	return 0;
}
