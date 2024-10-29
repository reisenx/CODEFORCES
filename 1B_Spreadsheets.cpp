#include<bits/stdc++.h>
using namespace std;

string toLetter(int col)
{
    string result;
    while(col > 0)
    {
        // Adjust A -> 1 to A -> 0
        col--;
        
        // Find character
        char letter = 'A' + (col%26);
        result = letter + result;
        col /= 26;
    }
    return result;
}

int toNumber(string letter)
{
    int result = 0;
    for(char &c: letter)
    {
        result = (result*26) + ((c - 'A') + 1);
    }
    return result;
}

void toRXCY(string CR)
{
    string row, t_col;
    for(char &c : CR)
    {
        if(isalpha(c)) t_col.push_back(c);
        if(isdigit(c)) row.push_back(c);
    }
    int col = toNumber(t_col);
    cout << 'R' << row << 'C' << col << endl;
}

void toCR(string RXCY)
{
    bool isRow = false, isCol = false;
    string row, t_col;
    for(char &c : RXCY)
    {
        if(c == 'R') isRow = true;
        if(c == 'C')
        {
            isCol = true;
            isRow = false;
        }
        if(isdigit(c) && isRow) row.push_back(c);
        if(isdigit(c) && isCol) t_col.push_back(c);
    }
    string col = toLetter(stoi(t_col));
    cout << col << row << endl;
}

int main()
{
    int n;
    cin >> n;
    while(n--)
    {
        bool hasR = false, hasC = false;
        string cell;
        cin >> cell;
        for(char &c : cell)
        {
            if(c == 'R') hasR = true;
            if(c == 'C') hasC = true;
            if(hasR && hasC) break;
        }
        if(hasR && hasC && cell[1] != 'C')
        {
            toCR(cell);
        }
        else toRXCY(cell);
    }
}