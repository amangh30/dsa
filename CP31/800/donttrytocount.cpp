#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n,m;
    cin>>n>>m;
    string x;
    string s;

    cin>>x;
    cin>>s;
    int i=1;
    int idx = n;
    string temp = x;
    if(temp.find(s) != string::npos){
        cout<<0<<endl;
        return;
    }
    while(idx<=m){
        temp = temp + temp;
        if(temp.find(s) != string::npos){
            cout<<i<<endl;
            return;
        }
        idx = temp.size();
        i++;
    }
    temp = temp + x;
    if(temp.find(s) != string::npos){
        cout<<i<<endl;
    }
    else{
        cout<<-1<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t){
        solve();
        t--;
    }
    return 0;
}

// https://codeforces.com/problemset/problem/1881/A