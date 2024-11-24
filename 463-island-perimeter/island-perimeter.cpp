class Solution {
public:
    int DFS(int i, int j, vector<vector<int>>& grid)
    {
        // if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() || grid[i][j] == 0) return 0;
        // int res = 4;
        // if (grid[i - 1][j])
        // {
        //     res--;
        //     grid[i - 1][j] = 0;
        // }
        // if (grid[i][j - 1]){
        //     res--;
        //     grid[i][j - 1] = 0;
        // }
        // if (grid[i + 1][j]){
        //     res--;
        //     grid[i + 1][j] = 0;
        // }
        // if (grid[i][j + 1]){
        //     res--;
        //     grid[i][j + 1] = 0;
        // }
        // res += DFS(i - 1, j, grid);
        // res += DFS(i, j - 1, grid);
        // res += DFS(i + 1, j, grid);
        // res += DFS(i, j + 1, grid);
        // return res;
         if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size()) 
            return 1; // Edge of the grid, contributing to the perimeter
        if (grid[i][j] == 0) 
            return 1; // Adjacent water cell, contributing to the perimeter
        if (grid[i][j] == -1) 
            return 0; // Already visited cell

        grid[i][j] = -1; // Mark as visited

        // DFS to calculate the perimeter
        int res = 0;
        res += DFS(i - 1, j, grid);
        res += DFS(i, j - 1, grid);
        res += DFS(i + 1, j, grid);
        res += DFS(i, j + 1, grid);
        return res;
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int n=grid.size(),c=grid[0].size();
        int res = 0;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < c; ++j)
            {
                if (grid[i][j]) res += DFS(i, j, grid);
            }
        }
        return res;
    }
};