#include<bits/stdc++.h>
using namespace std;
int n,m,a,b;
int main ()
{
	/* Input
	Calculate optimal price for n rides
	1 ride = a rubles
	m rides = b rubles */
	cin >> n >> m >> a >> b;
	//In case of special ticket price is cheaper than one-ride ticket
	
	if(b<=m*a)
	{
		//Case 1: Buy n/m special tickets then n%m one-ride tickets
		//Case 2: Buy (n/m)+1 special tickets
		if((b*((n/m)+1))<=(b*(n/m))+(a*(n%m))) cout << (b*((n/m)+1));
		else cout << (b*(n/m))+(a*(n%m));
	}
	//In case of special ticket price is more expensive than one-ride ticket
	//Buy n tickets of one-ride tickets 
	else cout << n*a;
	return 0;
}
