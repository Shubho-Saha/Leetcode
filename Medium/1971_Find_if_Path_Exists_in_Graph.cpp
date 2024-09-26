#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void dfs(int src, vector<vector<int>>& list, vector<bool>& vis) {
        vis[src] = true;

        for (int node : list[src]) {
            if (vis[node] == false) {
                dfs(node, list, vis);
            }
        }
    }

    bool validPath(int n, vector<vector<int>>& edges, int source,
                   int destination) {
        // vector<int> adlist[n];
        vector<vector<int>> adlist(n);
        vector<bool> vis(n, false);

        for (auto vec : edges) {
            int a = vec[0];
            int b = vec[1];
            adlist[a].push_back(b);
            adlist[b].push_back(a);
        }

        dfs(source, adlist, vis);

        return vis[destination];
    }
};