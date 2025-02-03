#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for(int i = 1; i < n; i++) {
        if(a[i] < a[i-1]) {
            cout << 0 << endl;
            return;
        }
    }
     
    int ans = INT_MAX;
    for(int i = 0; i < n-1; i++) {
        int diff = a[i+1] - a[i];
        ans = min(ans, (diff + 2) / 2);
    }
    
    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}

// https://codeforces.com/problemset/problem/1853/A