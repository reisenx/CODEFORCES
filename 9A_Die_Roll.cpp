#include<bits/stdc++.h>
using namespace std;
int Y,W;
int main()
{
	cin >> Y >> W;
	int cases = (6 - max(Y,W)) + 1;
	if(cases == 1) cout << "1/6";
	if(cases == 2) cout << "1/3";
	if(cases == 3) cout << "1/2";
	if(cases == 4) cout << "2/3";
	if(cases == 5) cout << "5/6";
	if(cases == 6) cout << "1/1";
	return 0;
}