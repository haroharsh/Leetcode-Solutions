#include<vector>
using namespace std;
class Solution {
public:
    bool check(vector<int>& nums) {
        int unsorted = 0;
        int s = nums.size();
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i] > nums[(i+1) % s]){
                unsorted++;
            }
        }
        bool res = (unsorted <= 1);
        return res;
    }
};