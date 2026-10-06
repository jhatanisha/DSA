class Solution {
public:
    int countBinarySubstrings(string s) {
        int prev=0;
        int curr=0;
        int ans=0;
        for(int i=0;i<s.size();i++){
            if(i>0 && s[i]==s[i-1]){
                curr++;
            }
            else{
                ans=ans+min(prev,curr);
                prev=curr;
                curr=1;
            }
        }
        ans=ans+min(prev, curr);
        return ans;
    }
};