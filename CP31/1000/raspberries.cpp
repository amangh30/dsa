#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;
    vector<int> a(n);
    for (int &x : a) cin >> x;

    if (k == 4) {
        bool divisible_by_4 = false;
        int count_even = 0;
        bool found_3mod4 = false;

        for (int x : a) {
            if (x % 4 == 0) {
                divisible_by_4 = true;
            }
            if (x % 2 == 0) {
                count_even++;
            }
            if ((x + 1) % 4 == 0) {
                found_3mod4 = true;
            }
        }

        if (divisible_by_4) {
            cout << 0 << '\n';
        } else if (count_even >= 2) {
            cout << 0 << '\n';
        } else if (count_even == 1 || found_3mod4) {
            cout << 1 << '\n';
        } else {
            cout << 2 << '\n';
        }

        return;
    }

    int res = INT_MAX;
    for (int x : a) {
        int rem = x % k;
        int ops = (k - rem) % k;
        res = min(res, ops);
    }

    cout << res << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}

// https://codeforces.com/problemset/problem/1883/C
