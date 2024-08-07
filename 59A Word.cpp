//Author: Vashvi Rank
#include <iostream>
using namespace std;
int main() 
{
    string s;
    cin >> s;
    int u = 0, n = s.size();
  
    for(int i = 0; i < n; i++) 
        if( s[i] >= 'A' && s[i] <= 'Z') 
            u++;
    
    if( u > ( n / 2 ))
        for(int i = 0; i < n; i++) 
            cout << char(toupper(s[i]));
        
    else
        for(int i = 0; i < n; i++) 
            cout << char(tolower(s[i]));
}
    
