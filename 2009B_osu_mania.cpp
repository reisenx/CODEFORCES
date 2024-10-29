#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;
        vector<int> beatmap;
        string temp;
        for(int i = 0; i < n; i++)
        {
            cin >> temp;
            if(temp == "#...") beatmap.push_back(1);
            else if(temp == ".#..") beatmap.push_back(2);
            else if(temp == "..#.") beatmap.push_back(3);
            else if(temp == "...#") beatmap.push_back(4);
        }
        for(int i = n-1; i >= 0; i--) { cout << beatmap[i] << " "; }
        cout << endl;
    }
    return 0;
}