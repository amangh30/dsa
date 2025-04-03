#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    vector<int> arr(n);
    map<int,int> mpp;
    int m_occ = 0;
    int m_val = 0;

    for(int i=0;i<n;i++){
        cin>>arr[i];
        mpp[arr[i]]++;
        if(m_occ<=mpp[arr[i]]){
            m_occ = mpp[arr[i]];
            m_val = arr[i];
        }
    }

    if(m_occ == n){
        cout<<"0"<<endl;
        return;
    }

    int ans = 0;

    while(m_occ < n){
        ans++;
        ans += m_occ;

        m_occ += m_occ;

        if(m_occ > n){
            ans -= m_occ-n;
        }
    }

    cout<<ans<<endl;

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

// https://codeforces.com/problemset/problem/1665/B
