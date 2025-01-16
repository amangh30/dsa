#include<iostream>
using namespace std;

int main(){
    int x = 0;
    int n = 0;
    cin>>n;
    while(n){
        string st;
        cin>>st;
        if(st.find('+') != string::npos){
            x++;
        }
        else{
            x--;
        }
        n--;
    }
    cout<<x<<endl;
    return 0;
}

// https://codeforces.com/problemset/problem/282/A