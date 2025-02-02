#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    vector<int> ans;
    ans.push_back(arr[0]);
    int i = 1;
    int j = 0;
    int m = 1;
    while(i<n){
        if(ans[j]<=arr[i]){
            ans.push_back(arr[i]);
            i++;
            j++;
        }
        else{
            ans.push_back(arr[i]);
            j++;
        }
        m++;
    }
    cout<<m<<endl;
    for(i=0;i<m;i++){
        cout<<ans[i]<<" ";
    }
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

// https://codeforces.com/problemset/problem/1862/B