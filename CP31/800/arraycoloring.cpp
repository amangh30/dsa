#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int sum = 0;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        sum += data;
    }
    if(sum % 2 == 0){
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

// https://codeforces.com/problemset/problem/1857/A