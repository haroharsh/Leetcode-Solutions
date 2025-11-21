class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int min= 0;
        int tot = 0;
        for(int weight : weights){
            min = max(min, weight);
            tot = tot + weight;
        }
        while(min < tot){
            int mid = min + (tot - min)/2;
            int day = 1;
            int current = 0;
            for(int weight : weights){
                if(current + weight > mid){
                    day++;
                    current = 0;
                }
                current = current + weight;
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