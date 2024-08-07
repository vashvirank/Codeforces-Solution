//Author: Vashvi Rank
#include <iostream>
using namespace std;
int main() {
    int m(0);
    string a, b;
    cin >> a >> b;
    for(int i = 0; i < a.size(); i++)
    {
        if( tolower(a[i]) > tolower(b[i]) )
        {
            m = 1;
            break;
        }
        if( tolower(a[i]) < tolower(b[i]) )
        {
            m = -1;
            break;
        }
    }
    cout << m << endl;
}

    
