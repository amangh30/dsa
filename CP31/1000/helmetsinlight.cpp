#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, p;
    cin >> n >> p;

    vector<pair<int, int>> items;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        items.push_back({num, 0});
    }

    for (int i = 0; i < n; i++) {
        int price;
        cin >> price;
        items[i].second = price;
    }

    sort(items.begin(), items.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
        if (a.second == b.second) {
            return a.first > b.first;
        }
        return a.second < b.second;
    });

    long long total_cost = p;
    int hired = 1;

    for (auto& item : items) {
        if (hired >= n) break;
        if (item.second >= p) continue;

        int take = min(item.first, n - hired);
        total_cost += 1LL * take * item.second;
        hired += take;
    }

    if (hired < n) {
        total_cost += 1LL * (n - hired) * p;
    }

    cout << total_cost << endl;
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

// https://codeforces.com/problemset/problem/1876/A
