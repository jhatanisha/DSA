class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int n=img.size();
        int m=img[0].size();
        vector<vector<int>> ans(n, vector<int>(m));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int sum=0;
                int count=0;
                for(int x=i-1;x<=i+1;x++){
                    for(int y=j-1;y<=j+1;y++){
                        if(x>=0 && x<n && y>=0 && y<m ){
                            sum=sum+img[x][y];
                            count++;
                        }
                    }
                }
                ans[i][j]=sum/count;
            }
        }
        return ans;
    }
};