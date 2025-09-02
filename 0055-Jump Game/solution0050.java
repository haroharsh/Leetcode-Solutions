class Solution {
    public boolean canJump(int[] nums) {
        int jumpAtEnd = 0;

        for (int i = 0; i < nums.length; i++) {
            if (i > jumpAtEnd) {
                return false;
            }
            jumpAtEnd = Math.max(jumpAtEnd, i + nums[i]);
        }
        return true;
    }
}