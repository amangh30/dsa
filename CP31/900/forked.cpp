#include <bits/stdc++.h>
using namespace std;

struct hash_pair {
    size_t operator()(const pair<int, int>& p) const {
        return ((size_t)p.first) * 31 + (size_t)p.second;
    }
};

void solve() {
    int a, b;
    cin >> a >> b;

    int xk, yk;
    cin >> xk >> yk;

    int xq, yq; 
    cin >> xq >> yq;

    unordered_set<pair<int, int>, hash_pair> st;

    int arr1[] = {a, -a, a, -a, b, -b, b, -b};
    int arr2[] = {b, b, -b, -b, a, a, -a, -a};

    for (int i = 0; i < 8; i++) {
        int newrow = xk + arr1[i];
        int newcol = yk + arr2[i];
        st.insert({newrow, newcol});
    }

    int ans = 0;


    for (auto& it : st) {
        int row = it.first;
        int col = it.second;

        for (int i = 0; i < 8; i++) {
            int newrow = row + arr1[i];
            int newcol = col + arr2[i];

            if (newrow == xq && newcol == yq) {
                ans++;
                break;
            }
        }
    }

    cout << ans << endl;
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

// https://codeforces.com/problemset/problem/1904/A