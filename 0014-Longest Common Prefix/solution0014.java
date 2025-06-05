class Solution {
    public String longestCommonPrefix(String[] strs) {
        if (strs == null || strs.length == 0){
            return "";
        }
        String comPref = strs[0];
        for (int i = 1; i < strs.length; i++) {
            while (strs[i].indexOf(comPref) != 0) {
                comPref = comPref.substring(0, comPref.length() - 1);
                if (comPref.isEmpty()) return "";
            }
        }
        return comPref;
    }
}