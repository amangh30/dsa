#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t){
        int n;
        cin>>n;
        if(n%3 == 0){
            cout<<"Second"<<endl;
        }
        else{
            cout<<"First"<<endl;
        }
        t--;
    }
    return 0;
}

// https://codeforces.com/problemset/problem/1899/A