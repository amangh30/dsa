#include <iostream>
using namespace std;

bool canFormAP(long long a, long long b, long long c) {
    if ((2 * b - c) % a == 0 && (2 * b - c) > 0) return true;

    if ((a + c) % (2 * b) == 0) return true;

    if ((2 * b - a) % c == 0 && (2 * b - a) > 0) return true;

    return false;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c;
        cin >> a >> b >> c;
        cout << (canFormAP(a, b, c) ? "YES" : "NO") << endl;
    }
    return 0;
}

// https://codeforces.com/problemset/problem/1624/B
