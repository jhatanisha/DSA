
class Solution {
public:
    bool isHappy(int n) {
        int sum = 0;
        int first = 0;
        int second = 0;
        unordered_map<int, int> mp;

        while (n != 1) {
            if (mp.find(n) != mp.end()) {
                return false;
            }

            mp[n] = 1;
            sum = 0;

            while (n > 0) {
                second = n % 10;
                sum += second * second;
                n = n / 10;
            }

            n = sum;
        }

        return true;
    }
};
