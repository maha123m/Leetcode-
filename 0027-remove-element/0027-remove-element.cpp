class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int k = 0; // Pointer to track the position of valid elements

        // Iterate through the array
        for (int i = 0; i < nums.size(); i++) {
            // If the current element is not equal to val
            if (nums[i] != val) {
                nums[k] = nums[i]; // Place it at position k
                k++; // Increment k
            }
        }

        return k; // Return the count of valid elements
    }
};