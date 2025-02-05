#include <bits/stdc++.h>
using namespace std;
void solve(){
    int  n;
    cin >> n;
    vector<int>a(n), b(n);
    vector<vector<int>>v;
    
    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++){
        cin >> b[i];
        v.push_back({a[i]-1 + b[i]-1, a[i], b[i]});
    }
    
    sort(v.begin(), v.end());
    
    for(auto &h : v) cout << h[1] << " ";
    cout << endl;
    for(auto &h : v) cout << h[2] << " ";
    cout << endl;
}
int main() 
{
    int t;
    cin >> t;
    while(t--)
    solve();
}
