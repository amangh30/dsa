#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n;
    cin >> n;

    for(int i=1;;i++){
        if(n%i != 0){
            cout<<i-1<<endl;
            break;
        }
    }
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

// https://codeforces.com/problemset/problem/1855/B
