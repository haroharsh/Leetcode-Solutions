class Solution {
public:
    vector<bool> prefixesDivBy5(vector<int>& nums) {
        vector<bool> ans;
        int x = 0;
        for(int i = 0; i < nums.size(); i++){
            x = (x * 2 + nums[i]) % 5;
            bool a = (x == 0);
            ans.push_back(a);
        }
        return ans;
    }
};