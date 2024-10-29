#include<bits/stdc++.h>
using namespace std;
int t,x[45];
int main ()
{
	//Input number of test cases
	cin >> t;
	//Input number of each test case
	for(int i=1;i<=t;i++)
	{
		cin >> x[i];
	}
	//Output
	for(int i=1;i<=t;i++)
	{
		if(x[i]==1) cout << ((1-1)*10)+(1) << endl;
		else if(x[i]==11) cout << ((1-1)*10)+(1+2) << endl;
		else if(x[i]==111) cout << ((1-1)*10)+(1+2+3) << endl;
		else if(x[i]==1111) cout << (1*10) << endl;
		else if(x[i]==2) cout << ((2-1)*10)+(1) << endl;
		else if(x[i]==22) cout << ((2-1)*10)+(1+2) << endl;
		else if(x[i]==222) cout << ((2-1)*10)+(1+2+3) << endl;
		else if(x[i]==2222) cout << (2*10) << endl;
		else if(x[i]==3) cout << ((3-1)*10)+(1) << endl;
		else if(x[i]==33) cout << ((3-1)*10)+(1+2) << endl;
		else if(x[i]==333) cout << ((3-1)*10)+(1+2+3) << endl;
		else if(x[i]==3333) cout << (3*10) << endl;
		else if(x[i]==4) cout << ((4-1)*10)+(1) << endl;
		else if(x[i]==44) cout << ((4-1)*10)+(1+2) << endl;
		else if(x[i]==444) cout << ((4-1)*10)+(1+2+3) << endl;
		else if(x[i]==4444) cout << (4*10) << endl;
		else if(x[i]==5) cout << ((5-1)*10)+(1) << endl;
		else if(x[i]==55) cout << ((5-1)*10)+(1+2) << endl;
		else if(x[i]==555) cout << ((5-1)*10)+(1+2+3) << endl;
		else if(x[i]==5555) cout << (5*10) << endl;
		else if(x[i]==6) cout << ((6-1)*10)+(1) << endl;
		else if(x[i]==66) cout << ((6-1)*10)+(1+2) << endl;
		else if(x[i]==666) cout << ((6-1)*10)+(1+2+3) << endl;
		else if(x[i]==6666) cout << (6*10) << endl;
		else if(x[i]==7) cout << ((7-1)*10)+(1) << endl;
		else if(x[i]==77) cout << ((7-1)*10)+(1+2) << endl;
		else if(x[i]==777) cout << ((7-1)*10)+(1+2+3) << endl;
		else if(x[i]==7777) cout << (7*10) << endl;
		else if(x[i]==8) cout << ((8-1)*10)+(1) << endl;
		else if(x[i]==88) cout << ((8-1)*10)+(1+2) << endl;
		else if(x[i]==888) cout << ((8-1)*10)+(1+2+3) << endl;
		else if(x[i]==8888) cout << (8*10) << endl;
		else if(x[i]==9) cout << ((9-1)*10)+(1) << endl;
		else if(x[i]==99) cout << ((9-1)*10)+(1+2) << endl;
		else if(x[i]==999) cout << ((9-1)*10)+(1+2+3) << endl;
		else if(x[i]==9999) cout << (9*10) << endl;
	}
	return 0;
}
