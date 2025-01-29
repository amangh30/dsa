#include <bits/stdc++.h>
using namespace std;

class Disjoint {
    vector<int> rank, parent;

public:
    // Constructor initializes the parent of each node to itself and rank to 0
    Disjoint(int n) {
        rank.resize(n + 1, 0); 
        parent.resize(n + 1);
        for (int i = 0; i <= n; i++) {
            parent[i] = i; // Each node is initially its own parent
        }
    }

    // Find function with path compression
    int findPar(int node) {
        if (parent[node] == node) {
            return node; // If node is its own parent, return node
        }
        // Path compression: directly attach node to its ultimate parent
        return parent[node] = findPar(parent[node]); 
        // Time complexity: O(α(n)), where α(n) is the inverse Ackermann function (nearly constant)
    }

    // Union function based on rank
    void unionByRank(int u, int v) {
        int pu = findPar(u); // Find ultimate parent of u
        int pv = findPar(v); // Find ultimate parent of v
        
        if (pu == pv) return; // If already in the same set, do nothing

        // Attach the smaller tree under the larger tree
        if (rank[pu] < rank[pv]) {
            parent[pu] = pv;
        } 
        else if (rank[pu] > rank[pv]) {
            parent[pv] = pu;
        } 
        else {
            parent[pv] = pu;  // If same rank, make one root and increment rank
            rank[pu]++;
        }
        // Time complexity: O(α(n)), due to path compression
    }
};

int main() {
    Disjoint ds(5); // Initialize Disjoint Set with 5 elements

    ds.unionByRank(1, 2);
    ds.unionByRank(2, 3);

    cout << ds.findPar(1) << endl; // Output: Representative of set containing 1
    cout << ds.findPar(3) << endl; // Output: Representative of set containing 3

    return 0;
}
