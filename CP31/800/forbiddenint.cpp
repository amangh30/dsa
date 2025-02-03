#include<bits/stdc++.h>
using namespace std;

int helper(int n,int k,int x){
    while(k != 0){
        if(k != x && n>=k){
            if((x==1 && (n-k) == 1)) {
                k--;
                continue;
            }
            return k;
        }
        else{
            k--;
        }
    }
    return -1;
}

void solve(){
    int n,k,x;
    cin>>n>>k>>x;
    vector<int> ans;
    while(n){
        int diff = helper(n,k,x);
        if(diff == -1){
            cout<<"No"<<endl;
            return;
        } 
        n = n-diff;
        ans.push_back(diff);
    }
    cout<<"YES"<<endl;
    int size = ans.size();
    cout<<size<<endl;
    for(int i=0;i<size;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

// https://codeforces.com/contest/1845/problem/A