#include<bits/stdc++.h>
using namespace std;
int x,ans=0;
int main ()
{
	//Input number of required bacteria (x)
	cin >> x;
	//Convert into Binary number
	while(x>0)
	{
		if(x%2==1)ans++;
		x=x/2;
	}
	//Output
	cout << ans;
	return 0;
}
/* 
Solution (Finding number of bacteria)
1. Turn x into binary number
	Ex. 43 --> 101011
	1 Put 1 bacteria in the 1st day (Resulting 32 bacteria in 6th day)
	0 Put 0 bacteria in the 2nd day (Resulting 0 bacteria in 6th day)
	1 Put 1 bacteria in the 3rd day (Resulting 8 bacteria in 6th day)
	0 Put 0 bacteria in the 4th day (Resulting 0 bacteria in 6th day)
	1 Put 1 bacteria in the 5th day (Resulting 2 bacteria in 6th day)
	1 Put 1 bacteria in the 6th day (Resulting 1 bacteria in 6th day)
2. Plus all digits
	Ex. 101011 --> 1+0+1+0+1+1 = 4 Bacteria
*/
/* 
Solution (Covert Decimal into Binary)
	Ex.Covert 43
	1.) 43%2=1 So the 6th digit = 1
		43/2=21
	2.) 21%2=1 So the 5th digit = 1
		21/2=10
	3.) 10%2=0 So the 4th digit = 0
		10/2=5
	4.) 5%2=1 So the 3th digit = 1
		5/2=2
	5.) 2%2=0 So the 2nd digit = 0
		2/2=1
	6.) 1%2=1 So the 1st digit = 1
		1/2=0 End of the program
*/
