#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<pair<int, int>> v = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

    bool isValid(int i, int j, int row, int col) {
        if (i < 0 || i >= row || j < 0 || j >= col)
            return false;
        return true;
    }
    int islandPerimeter(vector<vector<int>>& grid) {

        int row = grid.size();
        int col = grid[0].size();

        int peri = 0;

        for(int i=0; i<row; i++) {
            for(int j=0; j<col; j++) {
                if (grid[i][j] == 1) {
                    for(pair<int, int> adj : v) {
                        int ci, cj;
                        ci = i + adj.first;
                        cj = j + adj.second;
                        if (isValid(ci, cj, row, col) == false) {
                            peri++;
                        } else {
                            if (grid[ci][cj] == 0) {
                                peri++;
                            }
                        }
                    }
                }
            }
        }

        cout<<peri<<endl;

        return peri;
    }
};