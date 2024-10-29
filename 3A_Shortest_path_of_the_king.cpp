#include<bits/stdc++.h>
using namespace std;
vector<string> movements;
pair<int,int> start,stop;
int main()
{
	string temp;
	cin >> temp;
	start = {temp[0] - 'a' + 1, temp[1] - '0'};
	cin >> temp;
	stop = {temp[0] - 'a' + 1, temp[1] - '0'};

	while(start.first != stop.first || start.second != stop.second)
	{
		if(start.first > stop.first && start.second > stop.second )
		{
			movements.push_back("LD");
			start.first--;
			start.second--;
		}
		else if(start.first > stop.first && start.second < stop.second )
		{
			movements.push_back("LU");
			start.first--;
			start.second++;
		}
		else if(start.first < stop.first && start.second > stop.second )
		{
			movements.push_back("RD");
			start.first++;
			start.second--;
		}
		else if(start.first < stop.first && start.second < stop.second ) 
		{
			movements.push_back("RU");
			start.first++;
			start.second++;
		}
		else if(start.first > stop.first)
		{
			movements.push_back("L");
			start.first--;
		}
		else if(start.first < stop.first)
		{
			movements.push_back("R");
			start.first++;
		}
		else if(start.second > stop.second)
		{
			movements.push_back("D");
			start.second--;
		}
		else if(start.second < stop.second)
		{
			movements.push_back("U");
			start.second++;
		}
	}
	cout << movements.size() << endl;
	for(auto &x : movements) cout << x << endl;
	return 0;
}