#include<bits/stdc++.h>
using namespace std;
int t,n[105],a[105][105],s[105][105],temp,sus[105];
int main ()
{
	//Input test case
	scanf("%d",&t);
	//Input numbers of number in each test case's array
	for(int i=1;i<=t;i++)
	{
		scanf("%d",&n[i]);
		//Input number in a test case's array
		for(int j=1;j<=n[i];j++)
		{
			scanf("%d",&a[i][j]);
			//Put the value in the s[i][j]
			s[i][j]=a[i][j];
		}
		//Sorting array in s[i][j] from lowest to highest
		for(int j=1;j<=n[i];j++)
		{
			for(int k=j+1;k<=n[i];k++)
			{
				if(s[i][k]<s[i][j])
				{
					//Put the smaller number in temp
					temp=s[i][k];
					//Replace greater number in back position
					s[i][k]=s[i][j];
					//Replace smaller number in front postion
					s[i][j]=temp;
				}
			}
		}
		//Find out the odd in the sorted array
		//The odd should be first or last number in array
		if(s[i][1]!=s[i][2])sus[i]=s[i][1];
		else sus[i]=s[i][n[i]]; 
	}
	//Output the index of sus[i]
	for(int i=1;i<=t;i++)
	{
		for(int j=1;j<=n[i];j++)
		{
			if(a[i][j]==sus[i])
			{
				printf("%d\n",j);
				break;
			}
		}
	}
	return 0;
}
