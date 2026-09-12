class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        
        for(int i=0;i<arr.size();i++){
            int maxele=-1;
            for(int j=i+1;j<arr.size();j++){
                maxele=max(maxele,arr[j]);
            }
            arr[i]=maxele;
        }
        return arr;
    }
};