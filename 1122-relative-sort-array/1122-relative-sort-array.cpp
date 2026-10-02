class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        map<int, int>mp;
        for(int i=0;i<arr1.size();i++){
            mp[arr1[i]]++;
        }
        vector<int> ans;
        for(int x:arr2){
            while(mp[x]>0){
                ans.push_back(x);
                mp[x]--;
            }
        }
        for(auto p:mp){
            while(p.second--){
                ans.push_back(p.first);
            }
        }
        return ans;
    }
};