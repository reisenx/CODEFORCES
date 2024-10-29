#include<bits/stdc++.h>
using namespace std;
int n,s[100005],cnt[10],ans=0;
int main ()
{
	//Input number of groups of schoolchildren
	scanf("%d",&n);
	//Input number of students in each group
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&s[i]);
		//Counting
		//cnt1 = Number of groups that have 1 schoolchild
		//cnt2 = Number of groups that have 2 schoolchildren
		//cnt3 = Number of groups that have 3 schoolchildren
		//cnt4 = Number of groups that have 4 schoolchildren
		if(s[i]==1)cnt[1]++;
		else if(s[i]==2)cnt[2]++;
		else if(s[i]==3)cnt[3]++;
		else if(s[i]==4)cnt[4]++;
	}
	printf("%d %d %d %d",cnt[1],cnt[2],cnt[3],cnt[4]);
	//1 Taxi can contains of 1 group of 4 schoolchildren
	//1 Taxi can contains of 2 group of 2 schoolchildren
	//1 Taxi can contains of 1 group of 3 schoolchildren and 1 group of 1 schoolchild
//	ans=cnt4+(cnt2/2)+min(cnt1,cnt3);
	//Find how many of groups of schoolchildren left
//	cnt1=cnt1-min(cnt1,cnt3);
//	cnt2=cnt2%2;
//	cnt3=cnt3-min(cnt1,cnt3);
	//Each group left needed 1 Taxi
//	ans=ans+cnt1+cnt2+cnt3;
	//Output number of taxi
	printf("%d",ans);
	return 0;
}
