#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
class Solution {
    public:
        int maxArea(vector<int>& height) {
            int left = 0;
            int right = height.size() - 1;  
            int areaMax = 0;
    
        while (left < right) {
            
            int h = min(height[left], height[right]);
            int width = right - left;
            int area = h * width;
            
            areaMax = max(areaMax, area);
    
            if (height[left] < height[right]) {
                left++;
            } else {
                right--;
            }
        }
    
        return areaMax;
        }
    };