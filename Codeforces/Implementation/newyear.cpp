#include<iostream>
using namespace std;

int main(){
    int x1,x2,x3;
    cin>>x1>>x2>>x3;

    int mid;

    if ((x1 > x2 && x1 < x3) || (x1 > x3 && x1 < x2)) {
        mid = x1;
    } else if ((x2 > x1 && x2 < x3) || (x2 > x3 && x2 < x1)) {
        mid = x2;
    } else {
        mid = x3;
    }

    int d = abs(x1-mid) + abs(x2-mid) + abs(x3-mid);

    cout<<d<<endl;

    return 0;

}

// https://codeforces.com/contest/723/problem/A