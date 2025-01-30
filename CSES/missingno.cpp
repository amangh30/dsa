#include<iostream>
using namespace std;

#define ll long long

int main(){
    ll n;
    cin>>n;
    ll sum = 0;
    for(int i=0;i<n-1;i++){
        int data;
        cin>>data;
        sum += data;
    }
    ll real_sum = n*(n+1)/2;
    ll ans = real_sum - sum;
    cout<<ans<<endl;
    return 0;
}

// https://cses.fi/problemset/task/1083/