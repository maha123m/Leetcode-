class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
       for (int i = 0; i < nums.size(); i++) {
           if (nums[i]== target) {
                return i;  // Return the index if target is found 
            } 
           if(target<nums[i])// if the current                                                                          element is greater than the target.
            {
              return i;
            }
            
       }
        
  
         return nums.size();  // If the target is greater than all elements, return the                                   size of the array.
        
    }
};