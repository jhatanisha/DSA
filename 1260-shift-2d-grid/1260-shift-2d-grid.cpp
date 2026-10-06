class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<int>> ans(n, vector<int>(m));
        k=k % (n*m);
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int pos = i * m + j; //1D m convrt kro
                int newPos = (pos + k) % (n * m);  /// shift kro k se %m*n kyuki last wali v sift krni h

                int newRow = newPos / m;  //row m convert 
                int newCol = newPos % m;// cool m convert 

                ans[newRow][newCol] = grid[i][j];
            }
        }
        return ans;
    }
};