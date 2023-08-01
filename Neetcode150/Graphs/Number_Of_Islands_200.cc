class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        vector<vector<bool>> grid_check(grid.size(), vector<bool>(grid[0].size(), false));
        int counter = 0;
        // Flood Filling algorithm using breadth first search
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                if (grid[i][j] == '1' && grid_check[i][j] == false) {
                    dfs(grid, i, j, grid_check);
                    counter++;
                }
            }
        }
        
        return counter;
    }
    
    void dfs(vector<vector<char>>& grid, int i, int j, vector<vector<bool>>& grid_check) {    
        if (grid_check[i][j] == true) {
            return;
        }
        
         grid_check[i][j] = true;
        
        if (i < (grid.size()-1) && grid[i+1][j] == '1') {
            dfs(grid, i+1, j, grid_check);
        }
        if (i > 0 && grid[i-1][j] == '1') {
            dfs(grid, i-1, j, grid_check);
        }
        if (j < (grid[i].size()-1) && grid[i][j+1] == '1') {
            dfs(grid, i, j+1, grid_check);
        }
        if (j > 0 && grid[i][j-1] == '1') {
            dfs(grid, i, j-1, grid_check);
        }
    }
};