#include<bits/stdc++.h>
using namespace std;
int n,d, cnt = 0;
vector<int> h;
int main()
{
    // Make std::cin and std::cout faster
    ios_base::sync_with_stdio(false); cin.tie(0);

    // Input height of the soldier
    cin >> n >> d;
    h.resize(n);
    for(int i = 0; i < n; i++) { cin >> h[i]; }

    // Count how many soldier pair that their difference is not more than than d
    for(int i = 0; i < n; i++)
    {
        for(int j = i+1; j < n; j++)
        {
            if(abs(h[i] - h[j]) <= d) cnt++;
        }
    }
    // Output
    cout << 2*cnt;
    return 0;
}