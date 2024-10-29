#include<bits/stdc++.h>
using namespace std;
string code;
int main()
{
	// Input Borze code
	cin >> code;
	// Given initial index at 0
	int i = 0;
	// Convert Borze code to number
	while(i < code.size())
	{
		// Code '--' (2)
		if(code[i] == '-' && code[i+1] == '-') {cout << 2; i += 2;}
		// Code '-.' (1)
		else if(code[i] == '-' && code[i+1] == '.') {cout << 1; i += 2; }
		// Code '.'  (0)
		else if(code[i] == '.') {cout << 0; i++; }
	}
	return 0;
}