#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s,t;
    cin>>s>>t;

    map<char,int> m1,m2;

    for(char& ch : s) m1[ch]++;
    for(char& ch : t) m2[ch]++;

    int i=0,j=0;

    while(i<s.size() && j<t.size()){
        if(s[i] == t[j]){
            if(m1[s[i]] < m2[t[j]]){
                break;
            }
            if(m1[s[i]] == m2[t[j]]){
                m2[t[j]]--;
                j++;
            }
        }

        m1[s[i]]--;
        i++;
    }

    if(j == t.size()){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

<<<<<<< HEAD
    int t;
    cin>>t;

    while(t--){
        solve();
    }
    return 0;
}

// https://codeforces.com/problemset/problem/1666/D
