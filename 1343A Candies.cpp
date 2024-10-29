#include<bits/stdc++.h>
using namespace std;
int t,n[10005],tempp,ans[10005];
int main ()
{
	//Input number of test cases
	cin >> t;
	//Input number in each test cases
	for(int i=1;i<=t;i++)
	{
		cin >> n[i];
		//Calculate x
		//(2^30) - 1 = 1073741823
		for(int j=2;j<=30;j++)
		{
			tempp=pow(2,j)-1;
			if(n[i]%tempp==0)
			{
				ans[i]=n[i]/tempp;
				break;
			}
		}
	}
	//Output
	for(int i=1;i<=t;i++)
	{
		cout << ans[i] << endl;
	}
	return 0;
}
/*
Number of Candies in k days
x+2x+4x+8x+...+(2^(k-1))x = n
x[1+2+(2^2)+(2^3)+...+(2^(k-1))] = n

Given A = 1+2+(2^2)+(2^3)+...+(2^(k-1))
2+(2^2)+(2^3)+...+(2^(k-1)) = A-1
2[1+2+(2^2)+(2^3)+...+(2^(k-2))] = A-1
1+2+(2^2)+(2^3)+...+(2^(k-2)) = (A-1)/2
1+2+(2^2)+(2^3)+...+(2^(k-2))+(2^(k-1))  = ((A-1)/2)+(2^(k-1))
A  = ((A-1)/2)+(2^(k-1))
2A = 2[((A-1)/2)+(2^(k-1))]
2A = (A-1)+(2^k)
A = (2^k) - 1

So
x[1+2+(2^2)+(2^3)+...+(2^(k-1))] = n
x((2^k) - 1) = n
x = n/((2^k) - 1)
*/
