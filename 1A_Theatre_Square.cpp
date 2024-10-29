#include<bits/stdc++.h>
using namespace std;
long long int n,m,a,side1,side2;
int main()
{
	cin >> n >> m >> a;
	side1 = n/a;
	side2 = m/a;
	if(n % a > 0) side1++;
	if(m % a > 0) side2++;
	cout << side1*side2;
	return 0;
}