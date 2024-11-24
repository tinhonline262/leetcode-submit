class Solution {
public:
    void DFS(int i, int j, vector<vector<int>>& grid, int& res)
    {
        
        if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size()) 
        {
            res++;
            return; 
        }
        if (grid[i][j] == 0) 
        {
            res++;
            return;
        }
        if (grid[i][j] == -1) 
            return;

        grid[i][j] = -1; // Mark as visited
        DFS(i - 1, j, grid, res);
        DFS(i, j - 1, grid, res);
        DFS(i + 1, j, grid, res);
        DFS(i, j + 1, grid, res);
    }
    int islandPerimeter(vector<vector<int>>& grid) {
        int n=grid.size(),c=grid[0].size();
        int res = 0;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < c; ++j)
            {
                if (grid[i][j]){
                    DFS(i, j, grid, res);
                    break;
                }
            }
        }
        return res;
    }
};