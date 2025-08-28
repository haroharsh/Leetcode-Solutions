#include <vector>
using namespace std;
class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        int diagonal = 0;
        int Area = 0;
        for (int i = 0; i < dimensions.size(); i++) {
            int l = dimensions[i][0];
            int w = dimensions[i][1];
            int diagonalX = l * l + w * w;
            int area = l * w;
            if (diagonalX > diagonal) {
                diagonal = diagonalX;
                Area = area;
            } else if (diagonalX == diagonal && area > Area) {
                Area = area;
            }
        }
        return Area;
    }
};
