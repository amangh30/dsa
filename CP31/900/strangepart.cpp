#include <bits/stdc++.h>
#include <iomanip>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;

    long long sum = 0;
    long long s = 0;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        s += arr[i];
        sum += ceil(arr[i] / (double)x);
    }

    cout << fixed << setprecision(0) << ceil(s / (double)x) << " " << sum << endl;
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

// https://codeforces.com/problemset/problem/1471/A
