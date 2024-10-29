#include<bits/stdc++.h>
using namespace std;
map<string, int> nameList;
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        string name;
        cin >> name;
        if(nameList.find(name) == nameList.end()) nameList[name] = 0;
        else nameList[name]++;

        if(nameList[name] == 0) cout << "OK" << endl;
        else cout << name << nameList[name] << endl;
    }
    return 0;
}