#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    vector<int> arr(n);
    int mini = INT_MAX;
    int maxi = INT_MIN;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        mini = min(mini,arr[i]);
        maxi = max(maxi,arr[i]);
    }

    int ans = arr[n-1] - arr[0];
    ans = max(ans,maxi-arr[0]);
    ans = max(ans,arr[n-1] - mini);

    for(int i=0;i<n;i++){
        if(i == 0){
            ans = max(ans, arr[n-1] - arr[i]);
        }
        else {
            ans = max(ans, arr[i-1] - arr[i]);
        }
    }

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

// https://codeforces.com/problemset/problem/1726/A
