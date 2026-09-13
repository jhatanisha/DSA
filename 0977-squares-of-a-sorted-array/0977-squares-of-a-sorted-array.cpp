class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> num1;
        for(int i=0;i<nums.size();i++){
            int square=abs(nums[i])*abs(nums[i]);
            num1.push_back(square);
        }
        sort(num1.begin(), num1.end());
        return num1;
    }
};