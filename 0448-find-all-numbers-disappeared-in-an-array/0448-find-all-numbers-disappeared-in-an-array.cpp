class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        for(int j=0;j<nums.size();j++){
            int i=abs(nums[j])-1;
            if(nums[i]>0){
                nums[i]=-nums[i];
            }
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                ans.push_back(i+1);
            }
        }
        return ans;
    }
};