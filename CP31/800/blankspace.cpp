#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int ans = 0;
    int count = 0;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        if(data == 0) count++;
        else{
            ans = max(ans,count);
            count = 0;
        }
    }
    ans = max(count,ans);
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

// https://codeforces.com/problemset/problem/1829/B