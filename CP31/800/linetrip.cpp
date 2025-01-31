#include<iostream>
using namespace std;

bool check(int gas,int* arr,int n,int x){
    int currgas = gas;
    int past = 0;
    for(int i=0;i<n;i++){
        int reach = arr[i];
        currgas = currgas + past - reach;
        past = reach;
        if(currgas<0){
            return false;
        }
        currgas = gas;
    }
    currgas = currgas + past - x;
    past = x;
    for(int i=n-1;i>=0;i--){
        int reach = arr[i];
        currgas = currgas + reach - past;
        past = reach;
        if(currgas<0){
            return false;
        }
        currgas = gas;
    }
    currgas = currgas - past;
    if(currgas<0) return false;
    return true;
}

void find(int* arr, int n, int x){
    int right = x*2;
    int ans = right;
    int left = 1;
    while(left <= right){
        int mid = left + (right - left)/2;
        if(check(mid,arr,n,x)){
            ans = min(ans,mid);
            right = mid - 1;
        }
        else{
            left = mid + 1;
        }
    }
    cout<<ans<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t){
        int n;
        int x;
        cin>>n>>x;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        find(arr,n,x);
        t--;
    }
    return 0;
}

// https://codeforces.com/problemset/problem/1901/A