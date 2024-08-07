//Author: Vashvi Rank
#include <iostream>
using namespace std;
int main() {
    string s;
    cin >> s;
    int n = s.size(), a = 0, b = 0;
    
    for(int i = 0; i < n; i += 2)
    {
        switch(s[i])
        {
            case '1' : a++; break;
            case '2' : b++; break;
        }
    }
    for(int i = 0; i < n; i++)
    {
        if(i % 2) cout << '+';
        else
        {
            if(a != 0)
            {
                cout << '1';
                a--;
            }
            else if(b != 0)
            {
                cout << '2';
                b--;
            } 
            else cout<< '3';
        }
    }
}

    
