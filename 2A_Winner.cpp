#include<bits/stdc++.h>
using namespace std;
int n, score[1005], maxScore;
string name[1005], maxPlayer;
map<string,int> scoreboard, turns;
set<string> survivePlayer;
int main()
{
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		cin >> name[i] >> score[i];
		if(scoreboard.find(name[i]) == scoreboard.end()) scoreboard[name[i]] = score[i];
		else scoreboard[name[i]] += score[i];
	}

	maxScore = (*scoreboard.begin()).second;
	for(auto &x : scoreboard) 
	{
		if(x.second > maxScore) maxScore = x.second;
		if(x.second > 0) survivePlayer.insert(x.first);
	}
	scoreboard.clear();

	for(int i = 0; i < n; i++)
	{
		if(scoreboard.find(name[i]) == scoreboard.end()) scoreboard[name[i]] = score[i];
		else scoreboard[name[i]] += score[i];
		
		if(scoreboard[name[i]] >= maxScore && survivePlayer.find(name[i]) != survivePlayer.end())
		{
			maxPlayer = name[i];
			break;
		}
	}
	cout << maxPlayer;
	return 0;
}