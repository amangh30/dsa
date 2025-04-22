#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin>>s;

    int c_1 = 0;
    int c_0 = 0;

    int n = s.length();

    string st = "";

    for(char& ch : s){
        if(ch == '1'){
            c_1++;
            st += '0';
        }
        else{
            c_0++;
            st += '1';
        }
    }

    if(c_0 == c_1){
        cout<<0<<endl;
        return;
    }

    for(int i=0;i<n;i++){
        char ch = st[i];

        if(ch == '0'){
            c_0--;
            if(c_0<0){
                cout<<n-i<<endl;
                return;
            }
        }
        else{
            c_1--;
            if(c_1<0){
                cout<<n-i<<endl;
                return;
            }
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

// https://codeforces.com/problemset/problem/1913/B
