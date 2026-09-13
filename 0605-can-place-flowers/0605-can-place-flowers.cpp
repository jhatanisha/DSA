class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int last=flowerbed.size()-1;
        for(int i=0;i<flowerbed.size();i++){
            if(flowerbed[i]==0 && (i==0 || flowerbed[i-1]==0) && (i==last || flowerbed[i+1]==0)){
                flowerbed[i]=1;
                n--;
            }
        }
        return n<=0;
    }
};