#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long n;
    cin>>n;

    if(n%2 != 0){
        cout<<-1<<endl;
    }
    else{
        n = n/2;
        if(n == 1){
            cout<<-1<<endl;
        }
        else{
            cout<<(n/3 + (n%3 != 0 ? 1 : 0))<<" "<<n/2<<endl;
        }
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

// https://codeforces.com/problemset/problem/1679/A
