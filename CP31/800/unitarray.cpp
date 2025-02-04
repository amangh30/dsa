#include<bits/stdc++.h>
using namespace std;

void fixSum(vector<int>& nums, int& sum,int& ans,int& countneg){
    for(int i=0;i<nums.size();i++){
        if(nums[i] == -1){
            nums[i] = 1;
            countneg--;
            ans++;
            sum = sum + 2;
        }
        if(sum>=0) return;
    }
}

void solve(){
    vector<int> nums;
    int n;
    cin>>n;
    int countneg = 0;
    int sum = 0;
    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        if(data == -1) countneg++;
        nums.push_back(data);
        sum += data;
    }
    int ans = 0;
    if(sum<0){
        fixSum(nums,sum,ans,countneg);
    }
    if(countneg % 2 == 0){
        cout<<ans<<endl;
    }
    else{
        cout<<ans+1<<endl;
    }
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    return 0;
}

// https://codeforces.com/problemset/problem/1834/A