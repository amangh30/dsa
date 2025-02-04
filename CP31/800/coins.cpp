#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool canRepresent(ll n, ll k) {
    if (n < 2 && n < k) return false;
    
    ll g = __gcd(2LL, k);

    return n % g == 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    
    int t;
    cin >> t;
    
    while (t--) {
        ll n, k;
        cin >> n >> k;
        cout << (canRepresent(n, k) ? "YES\n" : "NO\n");
    }
    return 0;
}

// https://codeforces.com/problemset/problem/1814/A