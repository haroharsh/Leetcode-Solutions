#include<iostream>
using namespace std;
#include<vector>
#include<string>

class Solution {
public:
    string multiply(string num1, string num2) {
    if (num1 == "0" || num2 == "0"){
    return "0";
    }
    vector<int> product(num1.size() + num2.size(), 0);
    for (int i =  num1.size() - 1; i >= 0; --i) {
        for (int j = num2.size() - 1; j >= 0; --j) {
            int mul = (num1[i] - '0') * (num2[j] - '0');
            int pos1 = i + j, pos2 = i + j + 1;
            int sum = mul + product[pos2];
            product[pos2] = sum % 10;
            product[pos1] = sum + sum / 10;
        }
    }
    
    int start = 0;
    while (start < product.size() && product[start] == 0){
        start++;
    }
    string out;
    for (  ; start < product.size(); start++) {
        out.push_back(product[start] + '0');
    }
    return out;
    }
};