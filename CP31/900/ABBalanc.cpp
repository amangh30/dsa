#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;

    int n = s.length();

    char ch = s[0];

    if(s[0] == s[n-1])
    cout<<s<<endl;
    else{
        s[0] = ch=='a'?'b':'a';
        cout<<s<<endl;
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

// https://codeforces.com/problemset/problem/1606/A
