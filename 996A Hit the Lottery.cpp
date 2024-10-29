#include<stdio.h>
int n,ans;
int main ()
{
	scanf("%d",&n);
	ans=(n/100)+((n%100)/20)+(((n%100)%20)/10)+((((n%100)%20)%10)/5)+((((n%100)%20)%10)%5);
	printf("%d",ans);
	return 0;
}
