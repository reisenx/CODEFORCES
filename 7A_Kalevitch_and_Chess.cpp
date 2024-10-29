#include<bits/stdc++.h>
using namespace std;
vector<string> horizontal, vertical;
int main()
{
	horizontal.resize(8);
	for(int i = 0; i < 8; i++) { cin >> horizontal[i]; }

	vertical.resize(8);
	for(int i = 0; i < 8; i++)
	{
		string temp;
		for(int j = 0; j < 8; j++) { temp.push_back(horizontal[j][i]); }
		vertical[i] = temp;
	}

	int blackCount = count(horizontal.begin(), horizontal.end(), "BBBBBBBB");
	blackCount += count(vertical.begin(), vertical.end(), "BBBBBBBB");
	
	if(blackCount == 16) cout << 8;
	else cout << blackCount;
	return 0;
}