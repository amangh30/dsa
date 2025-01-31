#include <bits/stdc++.h>
using namespace std;

class Solution {
    void dfs(int node, vector<vector<int>>& adj, stack<int>& st, vector<int>& vis){
        vis[node] = 1;
        for(int it : adj[node]){
            if(vis[it] == 0){
                dfs(it,adj,st,vis);
            }
        }
        st.push(node);
    }
  public:
    vector<int> topologicalSort(vector<vector<int>>& adj) {
        int n = adj.size();
        vector<int> vis(n,0);
        stack<int> st;
        for(int i=0;i<n;i++){
            if(vis[i] == 0){
                dfs(i,adj,st,vis);
            }
        }
        vector<int> ans;
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
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