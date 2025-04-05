#include<bits/stdc++.h>
using namespace std;

void solve(){
    long long init,n;
    cin>>init>>n;

    if(init%2==0){
        if(n%4==0){
            cout<<init<<endl;
        }
        else if(n%4==1){
            cout<<init-n<<endl;
        }
        else if(n%4==2){
            cout<<init+1<<endl;
        }
        else{
            cout<<init+(n+1)<<endl;;
        }
    }
    else{
        if(n%4==0){
            cout<<init<<endl;
        }
        else if(n%4==1){
            cout<<init+n<<endl;
        }
        else if(n%4==2){
            cout<<init-1<<endl;
        }
        else{
            cout<<init-(n+1)<<endl;;
        }
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

// https://codeforces.com/problemset/problem/1607/B
