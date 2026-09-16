class Solution {
public:
    int strStr(string haystack, string needle) {
        int m=needle.size();
        int n=haystack.size();
        vector<int>lps(m,0);
        int i=1;
        int l=0;
        while(i<m){
            if(needle[i]==needle[l]){
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
        i=0;
        l=0;
        while(i<n){
            if(haystack[i]==needle[l]){
                i++;
                l++;
            }else if(i<n && haystack[i]!=needle[l]){
                if(l==0){
                    i++;
                }else{
                    l=lps[l-1];
                }
            }
            if(l==m){
                return i-l;
            }
        }
        return -1;
    }
};