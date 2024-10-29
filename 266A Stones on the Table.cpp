#include<stdio.h>
int n,cnt=0;
char txt[55];
int main ()
{
	//Input how many letter
	scanf("%d",&n);
	//Input string
	scanf("%s",txt);
	//Check if that letter is the same as the previous letter then count
	for(int i=1;i<n;i++)
	{
		if(txt[i]==txt[i-1])
		{
			cnt++;
		}
	}
	//Output
	printf("%d",cnt);
	return 0;
}
