class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.length()!=goal.length()){
            return false;
        }
        int n=s.length();
        for (int j = 0; j < n; j++) {
            char temp = s[0];

            for (int i = 0; i < n - 1; i++) {
                s[i] = s[i + 1];
            }

            s[n - 1] = temp;

            if(s==goal){
                return true;
            }
        }
        return false;
    }
};