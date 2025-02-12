#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve(){
    ll n,k,x;
    cin>>n>>k>>x;

    ll low = k*(k+1)/2;

    ll high = 2*n - k+1;
    high = high*k/2;

    if(x>=low && x<=high)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
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

// https://codeforces.com/problemset/problem/1878/C