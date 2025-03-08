#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, q;
    cin >> n >> q;

    vector<int> arr(n + 1, 0);
    vector<long long> prefix(n + 1, 0);
    long long sum = 0;

    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
        prefix[i] = prefix[i - 1] + arr[i];
        sum += arr[i];
    }

    while (q--) {
        int l, r, k;
        cin >> l >> r >> k;

        long long subarray_sum = prefix[r] - prefix[l - 1];
        long long new_sum = sum - subarray_sum + (r - l + 1) * 1LL * k;

        cout << (new_sum % 2 ? "YES" : "NO") << endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}


// https://codeforces.com/problemset/problem/1807/D
