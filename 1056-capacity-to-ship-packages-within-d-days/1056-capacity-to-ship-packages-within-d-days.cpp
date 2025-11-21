class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int min= 0;
        int tot = 0;
        for(int i=0; i < weights.size();i++){
            min = max(min, weights[i]);
            tot = tot + weights[i];
        }
        while(min < tot){
            int mid = min + (tot - min)/2;
            int day = 1;
            int current = 0;
            for(int i=0; i <weights.size();i++){
                if(current + weights[i] > mid){
                    day++;
                    current = 0;
                }
                current = current + weights[i];
            }
            if(day>days){
                min = mid + 1;
            }
            else{
                tot = mid;
            }
        }
        return min;
    }
};