//Author: Vashvi Rank
#include <bits/stdc++.h>
using namespace std;
int main() 
{
    long long int k, n, w;
    cin >> k >> n >> w;
    w = (w * (w + 1) / 2) * k;
    cout << max((long long) 0, w - n) << endl;
    return 0;
}
