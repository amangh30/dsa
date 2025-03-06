#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    vector<int> arr(n+1);

    for(int i=1;i<=n;i++)
        cin>>arr[i];

    int ans = 0;

    for(int i=1;i<+n;i++)
        ans = __gcd(ans,abs(arr[i]-i));

    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--){
        solve();
    }

    return 0;
}


// https://codeforces.com/problemset/problem/1828/B
