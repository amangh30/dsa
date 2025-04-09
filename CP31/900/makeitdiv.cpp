#include <iostream>
#include <string>
#include <algorithm>
#include <climits>

using namespace std;

int minStepsToDivisibleBy25(const string &s) {
    int minDeletions = INT_MAX;
    const string targets[] = {"00", "25", "50", "75"};

    for (const string &target : targets) {
        int pos1 = -1, pos2 = -1;
        for (int i = s.size() - 1; i >= 0; --i) {
            if (s[i] == target[1]) {
                pos2 = i;
                break;
            }
        }
        if (pos2 == -1) continue;

        for (int i = pos2 - 1; i >= 0; --i) {
            if (s[i] == target[0]) {
                pos1 = i;
                break;
            }
        }
        if (pos1 == -1) continue;

        int deletions = (pos2 - pos1 - 1) + (s.size() - pos2 - 1);
        minDeletions = min(minDeletions, deletions);
    }

    return minDeletions;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string n;
        cin >> n;
        cout << minStepsToDivisibleBy25(n) << endl;
    }
    return 0;
}

// https://codeforces.com/problemset/problem/1593/B
