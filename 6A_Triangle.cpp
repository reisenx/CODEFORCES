#include<bits/stdc++.h>
using namespace std;
vector<int> v;
int main()
{
	v.resize(4);
	for(int i = 0; i < 4; i++) { cin >> v[i]; }
	sort(v.begin(), v.end());
	if(v[0] + v[1] > v[2] || v[0] + v[1] > v[3] || v[1] + v[2] > v[3])
	{
		cout << "TRIANGLE";
	}
	else if(v[0] + v[1] == v[2] || v[0] + v[1] == v[3] || v[1] + v[2] == v[3])
	{
		cout << "SEGMENT";
	}
	else cout << "IMPOSSIBLE";
	return 0;
}