#include<iostream>
using namespace std;

class Solution {
public:
    string intToRoman(int num) {
        int rep[] = {1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1};
        string sym[] = {"M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"};
        
        int i = 0;
        string str1 = "";

        while (num > 0) {
            if (num >= rep[i]) {
                str1 = str1 + sym[i];
                num -= rep[i];
            } else {
                i++;
            }
        }
        return str1;
    }
};