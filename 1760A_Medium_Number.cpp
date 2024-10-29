#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        set<int> nums;
        for(int i = 0; i < 3; i++)
        {
            int temp;
            cin >> temp;
            nums.insert(temp);
        }
        auto it = nums.begin();
        it++;
        cout << *(it) << endl;
    }
    return 0;
}