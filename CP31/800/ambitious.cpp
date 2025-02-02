#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int mini = INT_MAX;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        int diff = abs(data);
        mini = min(diff,mini);
    }
    cout<<mini<<endl;
    return 0;
}

// https://codeforces.com/problemset/problem/1866/A