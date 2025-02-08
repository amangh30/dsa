#include<bits/stdc++.h>
using namespace std;

bool same(int i,int j){
    return (i%2 == j%2);
}

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int count = 0;
    int ans = 0;

    for(int i=1;i<n;i++){
        if(same(arr[i],arr[i-1])){
            count++;
        }
        else{
            ans += count;
            count = 0;
        }
    }
    ans += count;
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

// https://codeforces.com/problemset/problem/1777/A