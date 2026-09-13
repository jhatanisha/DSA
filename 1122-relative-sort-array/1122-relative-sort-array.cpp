class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int,int> mp;
        for(int num : arr1){
            mp[num]++;
        }
        vector<int> ans;
        for(int x: arr2){
            while(mp[x]>0){
                ans.push_back(x);
                mp[x]--;
            }
        }
        for(auto p : mp) {
            while(p.second--){
                ans.push_back(p.first);
            }
        }
        return ans;
    }
};