#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void check(vector<int>& arr, int k, int n){
    if(k == 1){
        vector<int> sorted = arr;
        sort(sorted.begin(),sorted.end());
        if(sorted == arr){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    else{
        cout<<"YES"<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t){
        int n, k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        check(arr,k,n);
        t--;
    }
}

// https://codeforces.com/problemset/problem/1903/A