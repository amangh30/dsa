#include<iostream>
using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;
    int t1 = k * l;
    int t2 = t1/nl;
    int t3 = c*d;
    int t4 = p/np;
    int ans = min(min(t2,t3),t4)/n;
    cout<<ans<<endl;
    return 0;
}

// https://codeforces.com/problemset/problem/151/A