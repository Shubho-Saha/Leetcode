#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int m, n;
    bool flag;
    bool vis[505][505];
    vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
    bool isValid(int i, int j) {
        if (i < 0 || i >= m || j < 0 || j >= n)
            return false;
        return true;
    }

    void dfs(int si, int sj, vector<vector<int>>& grid2,
             vector<vector<int>>& grid1) {
        vis[si][sj] = true;
        if (grid1[si][sj] != 1) {
            flag = false;
        }

        for (pair<int, int> p : d) {
            int ci = si + p.first;
            int cj = sj + p.second;
            if (isValid(ci, cj) && vis[ci][cj] == false && grid2[ci][cj] == 1) {
                dfs(ci, cj, grid2, grid1);
            }
        }
    }
    int countSubIslands(vector<vector<int>>& grid1,
                        vector<vector<int>>& grid2) {
        m = grid2.size();
        n = grid2[0].size();
        int subIsland = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (vis[i][j] == false && grid2[i][j] == 1) {
                    flag = true;
                    dfs(i, j, grid2, grid1);
                    if (flag)
                        subIsland++;
                }
            }
        }

        return subIsland;
    }
};