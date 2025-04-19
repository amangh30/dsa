#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    vector<int> arr;

    for(int i=0;i<n;i++){
        int data;
        cin>>data;
        arr.push_back(data);
    }

    stack<int> st;

    vector<int> nextGreater(n,-1);

    for(int i=n-1;i>=0;i--){
        while(!st.empty() && arr[st.top()]<=arr[i]){
            st.pop();
        }
        if(!st.empty()) nextGreater[i] = st.top();
        st.push(i);
    }

    while (!st.empty()) {
        st.pop();
    }

    vector<int> nextSmaller(n, -1);

    for(int i = n - 1; i >= 0; i--) {
        while(!st.empty() && arr[st.top()] >= arr[i]) {
            st.pop();
        }
        if(!st.empty()) nextSmaller[i] = st.top();
        st.push(i);
    }

    for(int i=0;i<n;i++){
        if(nextGreater[i] != -1 && nextGreater[i] != n-1){
            if(nextSmaller[nextGreater[i]] != -1){
                cout<<"YES"<<endl;
                cout<<i+1<<" "<<nextGreater[i]+1<<" "<<nextSmaller[nextGreater[i]]+1<<endl;
                return;
            }
        }
    }

    cout<<"NO"<<endl;

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

// https://codeforces.com/problemset/problem/1380/A
