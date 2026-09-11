class Solution {
public:
    string toGoatLatin(string sentence) {
        stringstream ss(sentence);
        string word, ans;
        int count = 1;

        while (ss >> word) {
            if (word[0]!='a' && word[0]!='e' && word[0]!='i' &&
                word[0]!='o' && word[0]!='u' &&
                word[0]!='A' && word[0]!='E' && word[0]!='I' &&
                word[0]!='O' && word[0]!='U') {
                
                word += word[0];
                word.erase(0,1);
            }

            word += "ma";
            
            for(int i=0; i<count; i++)
                word += 'a';
            ans += word + " ";
            count++;
        }
        ans.pop_back();
        return ans;
    }
};