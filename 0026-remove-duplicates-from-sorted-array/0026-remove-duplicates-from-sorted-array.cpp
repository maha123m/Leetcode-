class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int count = 0; // This variable keeps track of the position of unique elements
        
        // Loop through the array to check for duplicates
        for (int i = 0; i < nums.size(); i++) { 
            

            // `i < nums.size() - 1` ensures that `nums[i + 1]` does not go out of bounds.
            // This condition prevents accessing an index beyond the last element of the vector.
            // If the current element is equal to the next element, skip it
            if (i < nums.size() - 1 && nums[i] == nums[i + 1]) {
                continue;
            }
            else {
                // Store the unique element at the correct position
                nums[count] = nums[i];
                count++; // Increment the count of unique elements
            }
        }
        return count; // Return the number of unique elements
    }
};
