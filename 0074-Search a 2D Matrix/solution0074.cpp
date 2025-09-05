#include <vector>
using namespace std;
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rowElements = matrix.size();
        int colElements = matrix[0].size();
        int left = 0, right = rowElements * colElements - 1;
        while (left <= right)
        {
            int mid = left +(right - left)/2;
            int row = mid / colElements; 
            int col = mid % colElements;
            if (matrix[row][col]==target) 
                return true;
            if (matrix[row][col] < target)
                left = mid +1;
            else
                right = mid -1;
        }
        return false;
    }
};