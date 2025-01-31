#include <bits/stdc++.h>
using namespace std;

class Solution {
  public:
    vector<int> topologicalSort(vector<vector<int>>& adj) {
        int n = adj.size();
        vector<int> indegree(n,0);
        for(int i=0;i<n;i++){
            for(const int& it: adj[i]){
                indegree[it]++;
            }
        }
        queue<int> q;
        for(int i=0;i<n;i++){
            if(indegree[i] == 0){
                q.push(i);
            }
        }
        vector<int> ans;

        while(!q.empty()){
            int el = q.front();
            ans.push_back(el);
            q.pop();
            for(int it : adj[el]){
                indegree[it]--;
                if(indegree[it] == 0){
                    q.push(it);
                }
            }
        }
        return ans;
    }
};

int check(int V, vector<int> &res, vector<vector<int>> adj) {

    if (V != res.size())
        return 0;

    vector<int> map(V, -1);
    for (int i = 0; i < V; i++) {
        map[res[i]] = i;
    }
    for (int i = 0; i < V; i++) {
        for (int v : adj[i]) {
            if (map[i] > map[v])
                return 0;
        }
    }
    return 1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, E;
        cin >> N >> E;
        int u, v;

        vector<vector<int>> adj(N);

        for (int i = 0; i < E; i++) {
            int u, v;
            cin >> u >> v;
            adj[u].push_back(v);
        }

        Solution obj;
        vector<int> res = obj.topologicalSort(adj);

        cout << check(N, res, adj) << endl;

        cout << "~"
             << "\n";
    }

    return 0;
}