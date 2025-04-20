#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;

    stack<char> st;

    int count = 0;

    for(char& ch : s){
        if(!st.empty() && st.top() != ch){
            st.pop();
            count++;
        }
        else{
            st.push(ch);
        }
    }

    if(count%2==0) cout<<"NET"<<endl;
    else{
        cout<<"DA"<<endl;
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

// https://codeforces.com/problemset/problem/1373/B
