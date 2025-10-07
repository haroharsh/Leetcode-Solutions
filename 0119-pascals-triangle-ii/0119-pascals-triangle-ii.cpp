class Solution {
public:
    vector<int> getRow(int rowIndex) {
    vector<int> res(rowIndex + 1, 1);//resulting vector with all elements init with 1
    long curr = 1;
    int i =1;
    while(i <= rowIndex/2){
        curr= curr * ((rowIndex-i) + 1)/i;
        res[i]= res[(rowIndex-i)]= curr;
        i++;
    }
    return res;
    }
};