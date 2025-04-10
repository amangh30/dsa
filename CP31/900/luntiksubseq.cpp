#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n0=0;
    int n1=0;

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int data;
        cin>>data;

        if(data == 1)   n1++;
        else if(data == 0) n0++;
    }
    cout << (long long)n1 * (1LL << n0) << endl;
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

// https://codeforces.com/problemset/problem/1582/B
