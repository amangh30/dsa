#include <bits/stdc++.h>
using namespace std;

class Disjoint {
private:
    vector<int> parent;
    vector<int> size;

public:
    // Constructor
    Disjoint(int n) {
        parent.resize(n + 1);
        size.resize(n + 1, 1); // Initialize size to 1
        for (int i = 0; i <= n; i++) {
            parent[i] = i;
        }
    }

    // Find function with path compression
    int findPar(int node) {
        if (parent[node] == node)
            return node;
        return parent[node] = findPar(parent[node]); // Path compression
    }

    // Union by size
    void unionBySize(int u, int v) {
        int pu = findPar(u);
        int pv = findPar(v);

        if (pu == pv)
            return;

        if (size[pu] > size[pv]) {
            parent[pv] = pu;
            size[pu] += size[pv];
        } else {
            parent[pu] = pv;
            size[pv] += size[pu];
        }
    }
};

int main() {
    Disjoint ds(5); // Example usage
    ds.unionBySize(1, 2);
    ds.unionBySize(3, 4);
    cout << ds.findPar(2) << endl; // Should print representative of set
    cout << ds.findPar(3) << endl; // Should print representative of set
    return 0;
}
