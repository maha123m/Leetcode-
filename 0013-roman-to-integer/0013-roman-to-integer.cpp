class Solution {
public:
    int romanToInt(string s) {
        // Create a hash map (unordered_map in C++) to store Roman numeral values
        unordered_map<char, int> hm = {
            {'I', 1}, {'V', 5}, {'X', 10}, {'L', 50},
            {'C', 100}, {'D', 500}, {'M', 1000}
        };

        int result = hm[s[s.length() - 1]];  // Start with the last character's value

        // Traverse the string from the second-last character to the first
        for (int i = s.length() - 2; i >= 0; i--) {
            // If the current numeral is smaller than the next, subtract it
            if (hm[s[i]] < hm[s[i + 1]]) {
                result -= hm[s[i]];
            } else { 
                // Otherwise, add it
                result += hm[s[i]];
            }
        }

        return result;
    }
};