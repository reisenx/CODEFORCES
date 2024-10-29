#include<stdio.h>
#include<math.h>
int M,N,dmn1,dmn2,ans;
int main ()
{
	scanf("%d%d",&M,&N);
	if(M%2!=0)
	{
		dmn1=floor(M/2);
		dmn2=floor(N/2);
		ans=(dmn1*N)+dmn2;
	}
	else
	{
		dmn1=M/2;
		ans=(dmn1*N);
	}
	printf("%d",ans);
}
