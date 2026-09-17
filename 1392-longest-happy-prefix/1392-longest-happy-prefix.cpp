class Solution {
public:
    string longestPrefix(string s) {
        int m=s.size();
        vector<int>lps(m,0);
        int i=1;
        int l=0;
        while(i<m){
            if(s[i]==s[l]){
                l++;
                lps[i]=l;
                i++;
            }else if(l==0){
                lps[i]=0;
                i++;
            }else{
                l=lps[l-1];
            }
        }
        return s.substr(0,lps[m-1]);
    }
};