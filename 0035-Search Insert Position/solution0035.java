class Solution {
    public int searchInsert(int[] nums, int target) {
        // Using Binary Search
        int init = 0;
        int end = nums.length - 1;

        while (init <= end) {
            int mid = init + (end - init) / 2;
            if (nums[mid] == target) {
                return mid;
            } else if (nums[mid] < target) {
                init = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return init;
    }
} 
