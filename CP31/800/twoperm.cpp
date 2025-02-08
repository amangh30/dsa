#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,a,b;
    cin>>n>>a>>b;
    if(n==a && a==b){
        cout<<"Yes"<<endl;
        return;
    }
    int sum = a+b;
    int diff = n-sum;
    if(diff>=2){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
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

// https://codeforces.com/problemset/problem/1761/A