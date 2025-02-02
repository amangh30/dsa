#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int maxi = INT_MIN;
    unordered_map<int,int> mpp;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        mpp[data]++;
        maxi = max(maxi,data);
    }

    int num = mpp[maxi];
    if(num == n){
        cout<<-1<<endl;
        return;
    }
    cout<<n-num<<" "<<num<<endl;
    for(auto it : mpp){
        int el = it.first;
        if(el ==  maxi) continue;
        int no = it.second;
        for(int i=0;i<no;i++){
            cout<<el<<" ";
        }
    }
    cout<<endl;
    for(int i=0; i<num;i++){
        cout<<maxi<<" ";
    }
    cout<<endl;
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

// https://codeforces.com/problemset/problem/1859/A