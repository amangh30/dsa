#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    vector<int> nums(n);

    for(int i=0;i<n;i++){
        cin>>nums[i];
        if(nums[i] == 1){
            nums[i] += 1;
        }
    }

    for(int i=1;i<n;i++){
        if(nums[i] % nums[i-1] == 0){
            nums[i]++;
        }
   }

    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    cout<<endl;
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

// https://codeforces.com/problemset/problem/1794/B
