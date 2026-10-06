class Solution {
public:
    bool backspaceCompare(string s, string t) {
        int i = s.size() - 1;
        int j = t.size() - 1;
        while(i >= 0 || j >= 0) {
            int skip = 0;
            while(i >= 0) {
                if(s[i] == '#') {
                    skip++;
                }
                else if(skip > 0) {
                    skip--;
                }
                else {
                    break;
                }
                i--;
            }skip = 0;
            while(j >= 0) {
                if(t[j] == '#') {
                    skip++;
                }
                else if(skip > 0) {
                    skip--;
                }
                else {
                    break;
                }
                j--;
            }

            if(i < 0 && j < 0)
                return true;

            if(i < 0 || j < 0)
                return false;

            if(s[i] != t[j])
                return false;

            i--;
            j--;
        }

        return true;
    }
};