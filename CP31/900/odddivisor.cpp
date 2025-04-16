#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin>>n;

    if(n%2==0){
        while(n){
            n=n/2;
            if(n!=1 && n%2 != 0){
                cout<<"YES"<<endl;
                return;
            }
        }
        cout<<"NO"<<endl;
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
