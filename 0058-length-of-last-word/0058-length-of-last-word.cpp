class Solution {
public:
    int lengthOfLastWord(string s) {
        //  Remove trailing spaces
        int end = s.length() - 1;
        while (end >= 0 && s[end] == ' ') {
            end--;
        }

        // Find the last word
        int start = end;
        while (start >= 0 && s[start] != ' ') {
            start--;
        }

        // Calculate length
        return end - start;
    }
        
    
};