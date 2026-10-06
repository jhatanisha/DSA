class Solution {
public:
    int compress(vector<char>& chars) {
        int n = chars.size();
        int i = 0;
        int ans = 0;

        while(i < n) {
            char ch = chars[i];
            int count = 0;

            while(i < n && chars[i] == ch) {
                count++;
                i++;
            }

            chars[ans] = ch;
            ans++;

            if(count > 1) {
                string s = to_string(count);

                for(char c : s) {
                    chars[ans] = c;
                    ans++;
                }
            }
        }

        return ans;
    }
};