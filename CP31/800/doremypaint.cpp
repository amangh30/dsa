#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Count distinct elements and their frequencies
    unordered_map<int, int> freq;
    for (int x : a) {
        freq[x]++;
    }

    // Case 1: Only one distinct element
    if (freq.size() == 1) {
        cout << "Yes" << endl;
        return;
    }

    // Case 2: More than two distinct elements
    if (freq.size() > 2) {
        cout << "No" << endl;
        return;
    }

    // Case 3: Exactly two distinct elements
    auto it = freq.begin();
    int x = it->first;
    int cntX = it->second;
    it++;
    int y = it->first;
    int cntY = it->second;

    if (n % 2 == 0) {
        // For even n, frequencies must be equal
        if (cntX == cntY) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    } else {
        // For odd n, one frequency must be (n+1)/2 and the other (n-1)/2
        if ((cntX == (n + 1) / 2 && cntY == (n - 1) / 2) ||
            (cntY == (n + 1) / 2 && cntX == (n - 1) / 2)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

// https://codeforces.com/problemset/problem/1890/A