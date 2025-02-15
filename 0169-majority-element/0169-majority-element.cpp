class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = nums[0]; // Initialize candidate
        int count = 1; // Initialize count

        // Iterate through the array starting from the second element
        for (int i = 1; i < nums.size(); i++) {
            if (count == 0) {
                // If count is 0, set the current element as the new candidate
                candidate = nums[i];
                count = 1;
            } else if (nums[i] == candidate) {
                // If the current element matches the candidate, increment count
                count++;
            } else {
                // If the current element is different, decrement count
                count--;
            }
        }

        // The candidate is the majority element
        return candidate;
    }
};