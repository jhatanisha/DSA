class Solution {
public:
    int numSpecial(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        int count=0;
        int ans=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j] == 1) {
                    int countrow=0;
                    int countcol=0;
                    for(int k=0;k<m;k++){ //row me kitne 1 h uske liye h
                        if(mat[i][k]==1){
                            countrow++;
                        }
                    }
                    for(int k=0;k<n;k++){  //col count ke liye h
                        if(mat[k][j]==1){
                            countcol++;
                        }
                    }
                    if(countcol==1 && countrow==1){
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};