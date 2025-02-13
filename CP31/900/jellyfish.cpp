#include<bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    int a,b,c;
    cin>>a>>b>>c;

    ll sum = 0;

    for(int i=0;i<c;i++){
        int data;
        cin>>data;
        if(data>=a){
            data = a-1;
        }
        sum += data;
    }

    ll ans = b - 1;
    ans  += sum + 1;

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

// https://codeforces.com/problemset/problem/1875/A