#include<stdio.h>
int y,d1,d2,d3,d4;
int main ()
{
	//Input year
	scanf("%d",&y);
	//Loop increase the year by 1
	//If input is 9000, output must be 9012
	while(y<=9012)
	{
		y++;
		//Seperate year into 4 digits
		d1=y/1000;
		d2=(y-(d1*1000))/100;
		d3=(y-(d1*1000)-(d2*100))/10;
		d4=y%10;
		//Check if all 4 digits are different
		if(d1!=d2&&d1!=d3&&d1!=d4&&d2!=d3&&d2!=d4&&d3!=d4)
		{
			break;
		}
	}
	//Output
	printf("%d",y);
	return 0;
}
