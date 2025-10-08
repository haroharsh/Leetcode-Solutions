class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string comb;
        int i = 0, j = 0;
        while(i < word1.size() && j < word2.size()){//iterate till one of the string ends
            comb.push_back(word1[i++]);
            comb.push_back(word2[j++]);
        }
        while(i < word1.size()){//adding left chars of word1 at the end of comb
            comb.push_back(word1[i++]);
        }
        while(j < word2.size()){//adding left chars of word2 at the end of comb
            comb.push_back(word2[j++]);
        }
        return comb;
    }
};