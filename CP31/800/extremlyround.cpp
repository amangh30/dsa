#include <iostream>
using namespace std;

int countExtremelyRound(int n) {
    int result = 0;
    
    for (int digit = 1; digit <= 9; digit++) {
        int num = digit;
        while (num <= n) {
            result++;
            num *= 10;
        }
    }
    
    return result;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        cout << countExtremelyRound(n) << endl;
    }
    
    return 0;
}

// https://codeforces.com/problemset/problem/1766/A