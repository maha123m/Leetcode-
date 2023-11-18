class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int lastIndex=digits.size()-1;
        while(lastIndex>=0){
            if(digits[lastIndex]==9)
                digits[lastIndex]=0;
            else{
                digits[lastIndex]+=1;
                return digits;   
            }
            lastIndex--;
        }
        digits.insert(digits.begin(),1);
        return digits;      
    }
};