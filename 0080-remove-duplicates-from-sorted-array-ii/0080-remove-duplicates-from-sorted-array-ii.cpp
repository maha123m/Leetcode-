class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // Initialize a pointer `i` to track the position where the next valid element should be placed
        int i = 0;

        // Iterate through each element `n` in the array `nums`
        for (int n : nums) {
            // Check if the current element can be included in the result:
            // 1. If `i < 2`, it means we are still filling the first two positions (always valid).
            // 2. If `n != nums[i - 2]`, it means the current element can appear at most twice.
            if (i < 2 || n != nums[i - 2]) {
                // Place the current element at position `i` and increment `i`
                nums[i++] = n;
            }
        }

        // Return `i`, which represents the number of valid elements in the modified array
        return i;
    }
};