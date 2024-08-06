//Author: Vashvi Rank
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t, x(0);
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        if(s == "X++" || s == "++X") x += 1;
        if(s == "X--" || s == "--X") x -= 1;
    }
    cout << x;
    return 0;    
}
