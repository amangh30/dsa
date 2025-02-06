#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    int ans;
    cin>>ans;
    
    int c = n;


    

    for(int i=1;i<n;i++){
        int data;
        cin>>data;
        ans = ans ^ data;
    }

    if(ans == 0){
        cout<<ans<<endl;
        return;
    }

    if(c%2 == 0){
        cout<<-1<<endl;
    }
    else{
        cout<<ans<<endl;
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

// https://codeforces.com/problemset/problem/1805/A