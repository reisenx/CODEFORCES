#include<bits/stdc++.h>
using namespace std;
int t;

long long int rightTriangle01(map<long long int, set<long long int>> Points)
{
    vector<long long int> sameX; 
    set_intersection(Points[0].begin(), Points[0].end(), Points[1].begin(), Points[1].end(), back_inserter(sameX));
    long long int TriangleCount = sameX.size() * ((Points[0].size() - 1) + (Points[1].size() - 1));
    return TriangleCount;
}

long long int rightTriangle02(map<long long int, set<long long int>> Points)
{
    long long int TriangleCount = 0;
    // Find sequence x, x+1, x+2 on y=0, y=1, y=0
    for(auto &x : Points[0])
    {
        bool c1 = (Points[1].find(x+1) != Points[1].end());
        bool c2 = (Points[0].find(x+2) != Points[0].end());
        if(c1 && c2) TriangleCount++;
    }
    // Find sequence x, x+1, x+2 on y=1, y=0, y=1
    for(auto &x : Points[1])
    {
        bool c1 = (Points[0].find(x+1) != Points[0].end());
        bool c2 = (Points[1].find(x+2) != Points[1].end());
        if(c1 && c2) TriangleCount++;
    }
    return TriangleCount;
}

int Triangle(map<long long int, set<long long int>> Points)
{
    return rightTriangle01(Points) + rightTriangle02(Points);
}

int main()
{
    cin >> t;
    while(t--)
    {
        long long int n;
        cin >> n;
        map<long long int, set<long long int>> Points;
        Points[0] = {};
        Points[1] = {};
        for(int i = 0; i < n; i++)
        {
            int x,y;
            cin >> x >> y;
            Points[y].insert(x);
        }
        cout << Triangle(Points) << endl;
    }
    return 0;
}