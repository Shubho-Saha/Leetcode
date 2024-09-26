#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int n, m;
    bool vis[305][305];
    vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

    bool isValid(int i, int j) {
        if (i < 0 || i >= n || j < 0 || j >= m)
            return false;
        return true;
    }

    void dfs(int si, int sj, vector<vector<char>>& grid)
    {
        vis[si][sj] = true;

        for(int i=0; i<4; i++) {
            int ci = si + d[i].first;
            int cj = sj + d[i].second;
            if (isValid(ci, cj) && vis[ci][cj] == false && grid[ci][cj] == '1') {
                dfs(ci, cj, grid);
            }
        }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        n = grid.size();
        m = grid[0].size();
        memset(vis, false, sizeof(vis));

        int count = 0;

        for(int i=0; i<n; i++) {
            for(int j=0; j<m; j++) {
                if (vis[i][j] == false && grid[i][j] == '1') {
                    count++;
                    dfs(i, j, grid);
                }
            }
        }
        return count;
    }
};