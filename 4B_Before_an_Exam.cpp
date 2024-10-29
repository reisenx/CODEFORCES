#include<bits/stdc++.h>
using namespace std;
int d, sumTime, maxSum = 0, minSum = 0;
vector<int> schedule, timeLimit;
int main()
{
    cin >> d >> sumTime;
    for(int i = 0; i < d; i++)
    {
        int a,b;
        cin >> a >> b;
        timeLimit.push_back(a);
        schedule.push_back(b);
        minSum += a;
        maxSum += b;
    }
    if(sumTime > maxSum) cout << "NO";
    else if(sumTime < minSum) cout << "NO";
    else
    {
        cout << "YES" << endl;
        int index = 0;
        while(maxSum > sumTime)
        {
            if(schedule[index] > timeLimit[index])
            {
                schedule[index]--;
                maxSum--;
            }
            else index++;
        }
        for(auto &x : schedule) cout << x << " ";
    }
    return 0;
}