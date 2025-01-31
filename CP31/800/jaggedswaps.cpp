#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t){
        int n;
        cin>>n;
        int flag = false;
        for(int i=0;i<n;i++){
            int data;
            cin>>data;
            if(data == 1 && i==0){
                flag = true;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        t--;
    }
    return 0;
}

// https://codeforces.com/problemset/problem/1896/A