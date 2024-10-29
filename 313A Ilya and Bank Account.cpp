#include<bits/stdc++.h>
using namespace std;
int n,res[10];
int main ()
{
	//Input number
	cin >> n;
	if(n<0)
	{
		res[1]=n/10;
		res[2]=((n/100)*10)-(-n%10);
		cout << max(res[1],res[2]);
	}
	else cout << n;
	return 0;
}
/*
Given abcd as a 4-digit number
res[1]: result if delete the last digits
	-abcd/10 = abc
Equation: res[1] = -abcd/10

res[2]: result if delete the digits before the last digits
	1.) -abcd/100 = -ab
	2.) -ab*10 = -ab0
	3.) -ab0 - (-(-abcd)%10)
		-ab0 - (abcd%10)
		-ab0 - d
		-abd
Equation: res[2] = ((-abcd/100)*10)-(-(-abcd)%10)
*/
