#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    if(a>b){
        cout<<"First"<<endl;
    }
    else if(a<b){
        cout<<"Second"<<endl;
    }
    else{
        if(c%2!=0){
            cout<<"First"<<endl;
        }
        else{
            cout<<"Second"<<endl;
        }
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

// https://codeforces.com/problemset/problem/1858/A