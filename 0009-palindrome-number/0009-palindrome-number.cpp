class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0){
            return false;
        }
        long n = 0;
        int x2 = x;
        while(x2 > 0){
            n = n*10 + (x2 % 10);
            x2 = x2/10;
        }
        return n==x;
    }
};