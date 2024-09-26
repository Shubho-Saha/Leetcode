#include <bits/stdc++.h>
using namespace std;


class Solution {
public:
    
    bool vis[51][51];
    vector<pair<int, int>> vec = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};
    bool isValid(int i, int j, int row, int col) {
        if (i < 0 || i >= row || j < 0 || j >= col)
            return false;
        return true;
    }

    void bfs(int si, int sj, vector<vector<int>>& grid, int& tmp) {
        
        queue<pair<int, int>> q;
        q.push({si, sj});
        tmp++;
        vis[si][sj] = true;

        while (!q.empty()) {
            pair<int, int> parent = q.front();
            q.pop();

            for (pair<int, int> p : vec) {
                int ci = parent.first + p.first;
                int cj = parent.second + p.second;

                if (isValid(ci, cj, grid.size(), grid[0].size()) &&
                    vis[ci][cj] == false && grid[ci][cj] == 1) {
                    q.push({ci, cj});
                    tmp++;
                    vis[ci][cj] = true;
                }
            }
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int row = grid.size();
        int col = grid[0].size();
        int area = 0;

        memset(vis, false, sizeof(vis));

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < col; j++) {
                if (grid[i][j] == 1 && vis[i][j] == false) {
                    int tmp = 0;
                    bfs(i, j, grid, tmp);
                    cout << tmp << endl;
                    area = max(area, tmp);
                }
            }
        }

        return area;
    }
};