class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for(int i=0; i< flowerbed.size(); i++){
            bool l = (i==0) || flowerbed[i-1] == 0;
            bool r = (i== flowerbed.size() -1) || flowerbed[i+1] == 0;
            if(l && r && flowerbed[i] == 0){
                flowerbed[i] = 1;
                n--;
            }
        }
        return n<=0;
    }
};