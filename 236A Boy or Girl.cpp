//Author: Vashvi Rank
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    string s;
    cin >> s;
    unordered_map <char, int> m;
    for(auto &h : s) m[h]++;
    cout << ( m.size() % 2 ? "IGNORE HIM!" : "CHAT WITH HER!" ) << endl;
    return 0;
}
