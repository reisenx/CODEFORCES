#include<bits/stdc++.h>
char txt[55];
int n,t;
int main ()
{
	//Input
	//n = Number of students in the row
	//t = How many the queue swap
	scanf("%d%d",&n,&t);
	//Input string
	scanf("%s",txt);
	//Loop by times needed to swap
	for(int i=1;i<=t;i++)
	{
		//Swaping between B and G
		for(int j=0;j<n-1;j++)
		{
			if(txt[j]=='B'&&txt[j+1]=='G')
			{
				txt[j+1]='B';
				txt[j]='G';
				//Needed to skip for 1 loop after swapping
				j++;
			}
		}
	}
	//Output
	printf("%s",txt);
	return 0;
}
