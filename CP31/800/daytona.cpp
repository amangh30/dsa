#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    int k;
    cin>>n>>k;
    bool flag = false;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        if(data == k)
            flag = true;
    }
    if(flag){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
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

// https://codeforces.com/problemset/problem/1878/A