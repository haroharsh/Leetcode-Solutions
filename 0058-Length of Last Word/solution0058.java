class Solution {
    public int lengthOfLastWord(String s) {
        int l = 0;
        int i = s.length() - 1;
        while (i >= 0 && s.charAt(i) == ' ') {
            i--;
        }
        // counting of the no. of alphabets in last word of the string
        while (i >= 0 && s.charAt(i) != ' ') {
            l++;
            i--;
        }
        return l;
    }
}