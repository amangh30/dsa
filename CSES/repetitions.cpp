#include<iostream>
using namespace std;

int main(){
    string st;
    cin>>st;
    int ans = 0;
    int count = 1;
    for(int i=1;i<st.length();i++){
        if(st[i] == st[i-1]){
            count++;
        }
        else{
            ans = max(ans,count);
            count = 1;
        }
    }
    ans = max(ans,count);
    cout<<ans<<endl;
    return 0;
}