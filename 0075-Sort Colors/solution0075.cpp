#include <vector>
using namespace std;
class Solution {
    public:
        void sortColors(vector<int>& nums) {
            int k = nums.size() - 1;
            int i = 0,j = 0;
            
            while(i<=k)
            {
                if(nums[i] == 0)
                {
                    swap(nums[i++],nums[j++]);
                }
                else if(nums[i] == 1)
                {
                    i++;
                }
                else if(nums[i] == 2)
                {
                    swap(nums[i],nums[k]);
                    k--;
                }
            }
        }
    };