#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin>>n;

    priority_queue<int> pq;
    vector<int> arr(n);
    cin>>arr[0];
    pq.push(arr[0]);

    bool flag = true;

    for(int i = 1; i<n; i++){
        cin>>arr[i];
        pq.push(arr[i]);
        if(arr[i-1] != arr[i]) flag = false;
    }

    if(flag){
        cout<<"NO"<<endl;
        return;
    }
    cout<<"YES"<<endl;
    int i=1;

    arr[0] = pq.top();
    cout<<arr[0]<<" ";
    pq.pop();

    int cumSum = arr[0];

    while(!pq.empty()){
        int el = pq.top();
        pq.pop();

        if(el == cumSum){
            int j=1;

            while(pq.top() == cumSum){
                pq.pop();
                j++;
            }

            arr[i] = pq.top();
            pq.pop();

            while(j--){
                pq.push(el);
            }

            cumSum += el;

        }

        else{
            arr[i] = el;
            cumSum += el;
        }
        cout<<arr[i]<<" ";
        i++;
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

// https://codeforces.com/problemset/problem/1783/A