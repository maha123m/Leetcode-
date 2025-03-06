class Solution {
public:
    int lengthOfLastWord(string s) {
        // Remove trailing spaces manually (since C++ does not have a built-in trim function)
        int end = s.length() - 1;
        while (end >= 0 && s[end] == ' ') {
            end--;
        }

        int count = 0; // Variable to count characters in the last word

        // Traverse the string from the last character to the first
        for (int i = end; i >= 0; i--) {
            if (s[i] != ' ') {
                count++; // Increment count for each letter in the last word
            } else {
                break; // Stop counting when a space is found
            }
        }

        return count; // Return the length of the last word
    }
};