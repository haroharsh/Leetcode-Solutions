class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int sum = 0;
        vector<int> r1, r2;
        for(int x : nums){
            sum = sum + x;
            if(x%3==1){
                r1.push_back(x);
            }
            else if(x % 3 == 2){
                r2.push_back(x);
            }
        }
        if(sum%3 == 0){
            return sum;
        }
        int r = sum % 3;
        int x = INT_MAX;
        int rm1 = x;
        int rm2 = x;
        if(r == 1){
            if(!r1.empty()){
                rm1 = r1[0];
            }
            if(r2.size()>=2){
                rm2 = r2[0] + r2[1];
            }
        }
        else {
            if(!r2.empty()){
                rm1 = r2[0];
            }
            if(r1.size() >= 2){
                rm2 = r1[0] + r1[1];
            }
        }
        int del = min(rm1, rm2);
        if (del == x){
            return 0;
        }
        int ans = sum - del;
        return ans;
    }
};