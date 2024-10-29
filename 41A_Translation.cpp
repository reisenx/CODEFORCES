#include<bits/stdc++.h>
using namespace std;
string Text, ReversedText;
int main()
{
	// Input text
	cin >> Text >> ReversedText;
	// Reverse the reversed text
	reverse(ReversedText.begin(), ReversedText.end());
	// Check if they are the same string after reverse the string
	if(Text == ReversedText) cout << "YES";
	else cout << "NO";
	return 0;
}