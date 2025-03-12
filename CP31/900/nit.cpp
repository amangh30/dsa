#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    vector<int> arr(n+1);
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }

    int l=-1,r=-1;

    for(int i=1;i<=n;i++){
        if(arr[i] != 0){
            if(l==-1 && r==-1){
                l=r=i;
            }
            else{
                r=i;
            }
        }
    }

    if(l==-1 && r==-1){
        cout<<0<<endl;
    }
    else{
        for(int i=l;i<=r;i++){
            if(arr[i] == 0){
                cout<<2<<endl;
                return;
            }
        }
        cout<<1<<endl;
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

// https://codeforces.com/contest/1696/problem/B
