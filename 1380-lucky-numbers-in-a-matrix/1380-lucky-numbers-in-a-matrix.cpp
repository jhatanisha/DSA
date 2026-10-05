class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int n=matrix.size();
        int m=matrix[0].size();
        vector<int> ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                bool rowMin=true;
                bool colMax=true;
                for(int k=0;k<m;k++){
                    if(matrix[i][k]<matrix[i][j]){
                        rowMin=false;
                    }
                }
                for(int k=0;k<n;k++){
                    if(matrix[k][j]>matrix[i][j]){
                        colMax=false;
                    }
                }
                if(rowMin && colMax){
                    ans.push_back(matrix[i][j]);
                }
            }
        }
        return ans;
    }
};