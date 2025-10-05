class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        //multiply individually from two sides left and right
        vector<int>prod(nums.size(), 1);

        int left = 1; //Multiply all left elements
        for(int i = 0;i < nums.size();i++){
            prod[i] = left;
            left = left * nums[i];
        }

        int right = 1; //Multiply all right elements
        for(int i = nums.size() - 1;i >= 0;i--){
            prod[i] = prod[i] * right;
            right = right * nums[i];
        }
        return prod;
    }
};