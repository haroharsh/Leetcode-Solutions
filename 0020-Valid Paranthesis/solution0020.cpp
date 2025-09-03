#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        int a = s.length();
        vector<char> arr(a);
        int top = -1;
        for (char c : s) {
            if (c == '(' || c == '{' || c == '[') {
                arr[++top] = c;
            }
            else {
                if (top < 0){
                    return false;
                }
                char b = arr[top--];
                if ((c == ')' && b != '(') || (c == '}' && b != '{') || (c == ']' && b != '[')){
                    return false;
                }
            }
        }
        return top == -1;
    }
};