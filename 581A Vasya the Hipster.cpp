#include<stdio.h>
#include<math.h>
int a,b,ans1,ans2;
int main ()
{
	//Input number of socks
	//a = red socks
	//b = blue socks
	scanf("%d%d",&a,&b);
	//Output number of days that able to wear 2 different socks
	ans1=fmin(a,b);
	printf("%d ",ans1);
	//Find the remaining socks
	a=a-ans1;
	b=b-ans1;
	//Output number of days that able to wear 2 same socks
	ans2=fmax(a,b)/2;
	printf("%d",ans2);
	return 0;
}
