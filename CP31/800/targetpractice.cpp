#include<bits/stdc++.h>
using namespace std;

int findsum(int i, int j) {
    int n = 10;
    int minDistance = min({i, j, n - 1 - i, n - 1 - j});
    
    return minDistance + 1;
}

void solve(){
    int sum = 0;
    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            char ch;
            cin>>ch;
            if(ch == 'X'){
                sum += findsum(i,j);
            }
        }
    }

    cout<<sum<<endl;
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

// https://codeforces.com/problemset/problem/1877/A