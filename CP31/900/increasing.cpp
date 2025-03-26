#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    vector<int> arr(n);

    int idx = -1;

    for(int i=0;i<n;i++){
        cin>>arr[i];

        if(i!=0 && arr[i-1]>=arr[i])
            idx = i-1;
    }

    if(idx == -1){
        cout<<0<<endl;
        return;
    }

    int steps = 0;

    for(int i=idx;i>=0;i--){
        while(i!=n-1 && arr[i]>=arr[i+1]){
            arr[i] /= 2;
            steps++;

            if (arr[i] == 0 && arr[i+1] == 0){
                cout<<-1<<endl;
                return;
            }
        }
    }

    cout<<steps<<endl;

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


// https://codeforces.com/problemset/problem/1675/B
