#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long a, b;
  cin >> a >> b;

  if (a == b) {
    cout << "0 0\n";
  } else {
    long long d = abs(a - b);
    long long move = min(a % d, d - (a % d));
    cout << d << " " << move << "\n";
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}

// https://codeforces.com/problemset/problem/1543/A
