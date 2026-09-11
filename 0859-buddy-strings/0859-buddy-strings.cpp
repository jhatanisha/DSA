class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size()!=goal.size()){
            return false;
        }
        vector<int> ans;
        for(int i=0;i<s.size();i++){
            if(s[i]!=goal[i]){
                ans.push_back(i);
            }
        }
        if(ans.size()==2){
            swap(s[ans[0]],s[ans[1]]);
            if(s==goal){
                return true;
            }
        }
        if(ans.size()==0){
            for (int i=0;i<s.size();i++){
                for (int j=i + 1;j<s.size();j++){
                    if (s[i]==s[j]) return true;
                }
            }
        }
        return false; 
    }
};