#include <iostream>
using namespace std;
class Solution {
public:
    int maxPower(string s) {
        int count=0;
        int currCount=0;
        char curr=s[0];
        for(int i = 0; i < s.size(); i++){
            if(s[i] == curr){
                currCount++;
                count = max(count,currCount);
            }
            else{
                curr = s[i];
                count = max(count,currCount);
                currCount = 1;
            }
        }
        return count;
    }
};