#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<pair<int, int>> directions = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
    bool flag;

    bool isValid(int i, int j, int n, int m) {
        if (i < 0 || i >= n || j < 0 || j >= m)
            return false;
        return true;
    }

    void dfs(int si, int sj, vector<vector<int>>& grid,
             vector<vector<bool>>& vis) {
        vis[si][sj] = true;
        if (si == 0 || si == grid.size() - 1 || sj == 0 ||
            sj == grid[0].size() - 1) {
            flag = false;
        }

        for (pair<int, int> p : directions) {
            int ci = si + p.first;
            int cj = sj + p.second;

            if (isValid(ci, cj, grid.size(), grid[0].size()) && !vis[ci][cj] &&
                grid[ci][cj] == 0) {
                dfs(ci, cj, grid, vis);
            }
        }
    }

    int closedIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;

        vector<vector<bool>> vis(n, vector<bool>(m, false));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (vis[i][j] == false && grid[i][j] == 0) {
                    flag = true;
                    dfs(i, j, grid, vis);
                    if (flag)
                        ans++;
                }
            }
        }

        return ans;
    }
};