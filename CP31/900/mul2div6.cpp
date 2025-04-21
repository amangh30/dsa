#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;
    int fact_2=0;
    int fact_3=0;

    while(n!=1){
        if(n%3 == 0){
            fact_3++;
            n=n/3;
        }
        else if(n%2 == 0){
            fact_2++;
            n=n/2;
        }
        else{
            cout<<-1<<endl;
            return;
        }
    }

    if(fact_3>=fact_2){
        int ans = fact_3-fact_2+fact_3;
        cout<<ans<<endl;
    }
    else{
        cout<<-1<<endl;
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

// https://codeforces.com/problemset/problem/1374/B
