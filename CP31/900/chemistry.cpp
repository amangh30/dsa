#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,k;
    cin>>n>>k;

    string s;
    cin>>s;

    unordered_map<char,int> mpp;

    for(char ch : s){
        mpp[ch]++;
    }

    bool flag = true;
    int c = 0;
    bool f = false;

    for(auto it : mpp){
        int count = it.second;
        if(count % 2 != 0){
            if(c>k){
                flag = false;
                f = false;
            }
            if(c == k){
                f = true;
            }
            c++;
        }
    }

    if(flag){
        cout<<"YES"<<endl;
        return;
    }

    if(f && (n-k)%2 != 0){
        cout<<"YES"<<endl;
        return;
    }

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

// https://codeforces.com/problemset/problem/1883/B