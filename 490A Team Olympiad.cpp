#include<bits/stdc++.h>
using namespace std;
int t,n[5005],num1[5005],num2[5005],num3[5005],cnt1=0,cnt2=0,cnt3=0,team;
int main ()
{
	//Input number of student
	scanf("%d",&t);
	for(int i=1;i<=t;i++)
	{
		//Input type of student
		scanf("%d",&n[i]);
		//Count the number of student good at programming (Type 1)
		//Put the student index value in num1 array
		if(n[i]==1)
		{
			cnt1++;
			num1[cnt1]=i;
		}
		//Count the number of student good at maths (Type 2)
		//Put the student index value in num2 array
		else if(n[i]==2)
		{
			cnt2++;
			num2[cnt2]=i;
		}
		//Count the number of student good at PE (Type 3)
		//Put the student index value in num3 array
		else if(n[i]==3)
		{
			cnt3++;
			num3[cnt3]=i;
		}
	}
	//Find and Output number of team that able to form
	team=fmin(cnt1,fmin(cnt2,cnt3));
	printf("%d\n",team);
	//Output the index of student in each team
	for(int i=1;i<=team;i++)
	{
		printf("%d %d %d\n",num1[i],num2[i],num3[i]);
	}
	return 0;
}
