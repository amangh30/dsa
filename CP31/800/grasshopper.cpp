#include<bits/stdc++.h>
using namespace std;

int helper(int x, int k){
    int n = x;
    while(n!=0){
        if(n%k != 0){
            return n;
        }
        else{
            n--;
        }
    }
    return 0;
}

void solve(){
    int x,k;
    cin>>x>>k;
    vector<int> ans;
    while(x != 0){
        int d = helper(x,k);
        x = x-d;
        ans.push_back(d);
    }
    cout<<ans.size()<<endl;
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int  t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

// https://codeforces.com/problemset/problem/1837/A