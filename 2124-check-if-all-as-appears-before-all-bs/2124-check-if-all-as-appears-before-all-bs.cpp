class Solution {
public:
    bool checkString(string s) {
        int n=s.length();
        int count=0;
        for(int i=0;i<n-1;i++){
            if ((s[i]=='a' && s[i+1]=='a')||(s[i]=='a' && s[i+1]=='b')||(s[i]=='b' && s[i+1]=='b')){
                count++;
            }
        }
        if (count==n-1){
            return true;
        }
        else
            return false;
        
    }
};