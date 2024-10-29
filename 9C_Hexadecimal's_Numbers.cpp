#include<bits/stdc++.h>
using namespace std;

int binaryCount = 0;
string n;
int main()
{
    cin >> n;
    int len = n.length();
    for(int i = 0; i < len-1; i++) { binaryCount += pow(2,i); }
    
    if(n[0] != '1') binaryCount += pow(2, len-1);
    else 
    {
        
    }
}