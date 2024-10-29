#include<stdio.h>
int n,p[105],q[105],cnt=0;
int main ()
{
	//Input how many test cases
	scanf("%d",&n);
	/*
	Input each room info
	p[i] = how many people who already live there
	q[i] = room capacity
	*/
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d",&p[i],&q[i]);
		//Check if the room can store George and Alex and count
		if(q[i]-p[i]>=2)
		{
			cnt++;
		}
	}
	printf("%d",cnt);
}
