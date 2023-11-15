class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int nonZeroCount = 0;

         // Move non-zero elements to the front
        for (int i = 0; i < nums.size(); ++i) {
             if (nums[i] != 0) {
                 nums[nonZeroCount++] = nums[i];
             }
         }

        // Fill the remaining elements with zeros
        while (nonZeroCount < nums.size()) {
            nums[nonZeroCount++] = 0;
        }
        
    }
};