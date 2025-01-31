#include<iostream>
using namespace std;

void find(string& s,int n){
    int count = 0;
    int i=0;
    while(i<n){
        if(s[i] == '#'){
            i++;
            continue;
        }


        if(i+2<n && s[i] == '.' && s[i+1] == '.' && s[i+2] == '.'){
            count = 2;
            s[i] = s[i+1] = s[i+2]  = '1';
            i = i+3;
            break;
        }
        
        count++;
        i++;
    }
    cout<<count<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t){
        int n;
        cin>>n;
        string s; // . means empty and # means blocked
        cin>>s;
        find(s,n);
        t--;
    }
    return 0;
}

// https://codeforces.com/problemset/problem/1900/A