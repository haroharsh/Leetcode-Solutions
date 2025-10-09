class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int i = 0;
        string gcd;
        while(i < str1.size() && i < str2.size() && str1[i] == str2[i]){
            gcd.push_back(str1[i]);
            i++;
        }
        for(int s = gcd.size(); s > 0; s--){
            string res = gcd.substr(0, s);
            if(isDivisible(str1, res)&&isDivisible(str2, res)){
                return res;
            }
        }
        return "";
    }
private:
    bool isDivisible(string& str,string& sub){
        int n = str.size();
        int m = sub.size();
        if(n % m != 0){
            return false;
        }
        for(int i = 0; i < n; i++){
            if(str[i] != sub[i % m]){
                return false;
            }
        }
        return true;
    }
};