#include<stdio.h>
char z[10005];
int main ()
{
	scanf("%s",z);
	if(z[0]>='a'&&z[0]<='z')
	{
		z[0]=z[0]-32;
	}
	else
	{
		z[0]=z[0];
	}
	printf("%s",z);
}
