#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    if(n == 1){
        cout << 0 << endl;
        return;
    }

    sort(arr.begin(), arr.end());

    int ans = 1;
    int count = 1;

    for(int i = 1; i < n; i++){
        int diff = abs(arr[i] - arr[i-1]);

        if(diff <= k){
            count++;
        } else {
            ans = max(ans, count);
            count = 1;
        }
    }

    ans = max(ans, count);

    cout << n - ans << endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        solve();
    }

    return 0;
}

// https://codeforces.com/problemset/problem/1850/D
