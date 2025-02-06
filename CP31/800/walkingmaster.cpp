#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(b>d){
        cout<<-1<<endl;
        return;
    }
    int steps = d-b;
    a = a+steps;
    if(a<c){
        cout<<-1<<endl;
        return;
    }
    steps += a-c;
    cout<<steps<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

// https://codeforces.com/problemset/problem/1806/A