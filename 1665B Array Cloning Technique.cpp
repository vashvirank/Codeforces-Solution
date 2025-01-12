#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n, x, maxi(0), cnt(0);
    cin >> n;
    map<int, int>m;
    for(int i = 0; i < n; i++){
        cin >> x;
        m[x]++;
        maxi = max(maxi, m[x]);
    }
    cnt += n - maxi;
    while(maxi < n){
        maxi *= 2;
        cnt++;
    }
    cout << cnt << endl;
}
int main() 
{
    int t;
    cin >> t;
    while(t--)
    solve();
}
