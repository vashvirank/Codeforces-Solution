//Author: Vashvi Rank
#include <iostream>
using namespace std;
int main() {
    int n, cnt = 0;
    cin >> n;
    string s;
    cin >> s;
    char ch = s[0];
    for(int i = 1; i < n; i++)
    {
        if(s[i] == ch) cnt++;
        else ch = s[i];
    }
    cout << cnt << endl;
}
    
