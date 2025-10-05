class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> originalIndex;
        for(int i = 0; i < nums.size(); i++){
            originalIndex.push_back({nums[i], i});
        }

        sort(originalIndex.begin(), originalIndex.end());
        int left =0;
        int right =originalIndex.size() - 1;

        while(left < right){
            int sum = originalIndex[left].first + originalIndex[right].first;
            if(sum == target){
                return {originalIndex[left].second, originalIndex[right].second};
            } 
            else if(sum < target){
                left++;
            }
            else{
                right--;
            }
        }
        return {0,0};
    }
};