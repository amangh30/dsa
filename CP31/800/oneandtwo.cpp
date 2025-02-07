#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> nums(n);
    vector<double> prefix(n);

    cin >> nums[0];
    prefix[0] = log(nums[0]);

    for (int i = 1; i < n; i++) {
        cin >> nums[i];
        prefix[i] = prefix[i - 1] + log(nums[i]);
    }

    double prod = 0;
    int ans = INT_MAX;

    for (int i = n - 1; i >= 1; i--) {
        prod += log(nums[i]);
        if (abs(prod - prefix[i - 1]) < 1e-9) {
            ans = min(i - 1, ans);
        }
    }

    cout << (ans == INT_MAX ? -1 : ans + 1) << endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while (t--) {
        solve();
    }

    return 0;
}

// https://codeforces.com/contest/1788/problem/A
