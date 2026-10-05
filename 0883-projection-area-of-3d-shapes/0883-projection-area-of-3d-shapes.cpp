class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        int ans=0;
        for(int i = 0; i < n; i++) {     //non zero
            for(int j = 0; j < m; j++) {
                if(grid[i][j] > 0) {
                    ans++;
                }
            }
        }
        for(int i = 0; i < n; i++) {   //row k max or ans m add
            int maxi = 0;
            for(int j = 0; j < m; j++) {
                maxi = max(maxi, grid[i][j]);
            }
            ans += maxi;
        }
        for(int j = 0; j < m; j++) {  //colum k max or fir ans m add
            int maxi = 0;
            for(int i = 0; i < n; i++) {
                maxi = max(maxi, grid[i][j]);
            }
            ans += maxi;
        }

        return ans;
    }
};