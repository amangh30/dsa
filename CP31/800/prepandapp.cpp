#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    int ans = n;
    int left = 0;
    int right = n-1;

    while(left<right){
        if(s[left] != s[right]){
            ans -= 2;
            left++;
            right--;
        }
        else break;
    }

    cout<<ans<<endl;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while (t--){
        solve();
    }
    
    return 0;
}

// https://codeforces.com/problemset/problem/1791/C