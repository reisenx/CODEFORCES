#include<bits/stdc++.h>
using namespace std;
int t;
int main()
{
    cin >> t;
    while(t--)
    {
        int x,y,k;
        cin >> x >> y >> k;
        int x_times = x/k;
        int y_times = y/k;
        if(x % k != 0) x_times++;
        if(y % k != 0) y_times++;
        
        if(y_times >= x_times) cout << 2*y_times << endl;
        else cout << (2*x_times)-1 << endl;
    }
    return 0;
}