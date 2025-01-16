#include<iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    string num = to_string(n);

    for (int i = 0; i < num.size(); i++) {
        int digit = num[i] - '0';
        if (digit >= 5 && !(i == 0 && digit == 9)) {
            num[i] = '0' + (9 - digit);
        }
    }
    
    cout << num << endl;
    return 0;
}


// https://codeforces.com/contest/514/problem/A