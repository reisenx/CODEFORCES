#include<stdio.h>
int n,m;
int main ()
{
	/*Input
	n = number of rows
	m number of column */
	scanf("%d%d",&n,&m);
	//Output
	// i = rows
	// j = column
	for(int i=1;i<=n;i++)
	{
		//If that rows (i) is odd number output like this "######"
		if(i%2!=0)
		{
			for(int j=1;j<=m;j++)
			{
				printf("#");
			}
		}
		//If that rows (i) can divided by 4 output like this "#....."
		else if(i%4==0)
		{
			printf("#");
			for(int j=2;j<=m;j++)
			{
				printf(".");
			}
		}
		//If that rows (i) can divided by 2 output like this ".....#"
		else if(i%2==0)
		{
			for(int j=1;j<m;j++)
			{
				printf(".");
			}
			printf("#");
		}
		//New line
		printf("\n");		
	}
	return 0;
}
