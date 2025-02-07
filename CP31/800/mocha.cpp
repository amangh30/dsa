#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int prev;
    vector<int> ans(n);
    for(int i=0;i<n;i++){
        cin>>ans[i];
    }

    bool flag = true;
    
    for(int i=0;i<n-1;i++){
        if(!flag) break;
        for(int j=i+1;j<n;j++){
            if(__gcd(ans[i],ans[j]) <= 2){
                flag = false;
                break;
            }
        }
    }
    if(flag){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
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


// https://codeforces.com/problemset/problem/1789/A