#include<bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    vector<int> b(n);
    
    vector<pair<int,int>> pairs(n);
    for(int i = 0; i < n; i++) {
        pairs[i] = {a[i], i};
    }
    sort(pairs.begin(), pairs.end());
    
    for(int i = 0; i < n; i++) {
        b[pairs[i].second] = n - i;
    }
    
    for(int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
    return 0;
}

// https://codeforces.com/problemset/problem/1831/A