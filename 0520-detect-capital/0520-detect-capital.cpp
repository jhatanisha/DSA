class Solution {
public:
    bool detectCapitalUse(string word) {
        int n=word.size();
        int count=0;
        for(int i: word){
            if(isupper(i)){
                count++;
            }
        }
        if(count==0){
            return true;
        }else if(count==1 && isupper(word[0])){
            return true;
        }else if(count==n){
            return true;
        }else{
            false;
        }
        return false;
    }
};