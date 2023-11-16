class Solution {
public:
    int balancedStringSplit(string s) {
        int n=s.size();
        int balance=0;
        int result =0;
        for(int i=0;i<n;i++){
            if (s[i]=='R')
                balance++;
            else
                balance--;
            if (balance==0)
                result++;
                
            
        }
        return result;
    }
};