class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> sqre;
        for(int i=0;i<nums.size();i++){
            int squ=nums[i]*nums[i];
            sqre.push_back(squ);
        }
        sort(sqre.begin(),sqre.end());
        return sqre;
    }
};