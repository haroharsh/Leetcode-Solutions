class Solution {
    public String addBinary(String a, String b) {
        //Using Two Pointers
        //Using StringBuilder to easily manipulate String
        StringBuilder addBinary = new StringBuilder();
        int i = a.length() - 1;
        int j = b.length() - 1;
        int carry = 0;

        while (i >= 0 || j >= 0 || carry == 1) {
            int sum = carry;
            
            if (i >= 0) {
                sum += a.charAt(i--) - '0';
            }
            if (j >= 0) {
                sum += b.charAt(j--) - '0';
            }
            addBinary.append(sum % 2);
            carry = sum / 2;
        }
        
        return addBinary.reverse().toString();
    }
}