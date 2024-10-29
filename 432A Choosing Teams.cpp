#include<stdio.h>
int n,k,y[2005],cnt=0;
int main ()
{
	/*Input
	n = number of students
	k = times that they need to participate
	*/
	scanf("%d%d",&n,&k);
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&y[i]);
		//Check if they can attend the contest k times
		if(5-y[i]>=k)
		{
			cnt++;
		}
	}
	//Output how many teams can be made 
	printf("%d",cnt/3);
	return 0;
}
