class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int right =height.size()-1;
        int maxArea=0;
        while(left<right){
            int width=right-left;
            int Height=min(height[left],height[right]);
            int currentArea=width*Height;
            maxArea=max(maxArea,currentArea);
            if(height[left]<height[right]){
                left++;
            }
            else if(height[right]<height[left]){
                right--;
            }
            else{// if they are equal in height
                left++;
                 right--;
            }          
        }
        return maxArea;
        
    }
};