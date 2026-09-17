class Solution {
public:
    string removeOccurrences(string s, string part) {
        int m=part.size();
        vector<int>lps(m,0);
        int i=1;
        int l=0;
        while(i<m){
            if(part[i]==part[l]){
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
        while(true){
            int n=s.size();
            i=0;
            l=0;
            while(i<n){
                if(s[i]==part[l]){
                    i++;
                    l++;
                }else{
                    if(l==0){
                        i++;
                    }else{
                        l=lps[l-1];
                    }
                }if(l==m){
                    s.erase(i-m,m);
                    break;
                }
            }
            if(i==n && l<m){
                break;
            }
        }
        return s;
    }
};