#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    string s;
    cin>>s;

    int ans = 0;
    int count = 1;

    char prev = s[0];

    for(int i=1;i<n;i++){
        char curr = s[i];
        if(curr == prev){
            count++;
        }
        else{
            ans = max(ans,count);
            count = 1;
        }
        prev = curr;
    }

    ans = max(ans,count);
    cout<<ans+1<<endl;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        solve();
    }

    return 0;
}

// https://codeforces.com/problemset/problem/1837/B
