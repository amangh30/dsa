#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin>>n;

    if(n%2==0){
        if(n%3==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;

    while(t--) solve();

    return 0;
}

// https://codeforces.com/problemset/problem/1475/A
