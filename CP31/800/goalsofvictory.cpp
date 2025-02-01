#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int sum = 0;
    for(int i=0;i<n-1;i++){
        int data;
        cin>>data;
        sum += data;
    }
    cout<<-sum<<endl;
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

// https://codeforces.com/problemset/problem/1877/A