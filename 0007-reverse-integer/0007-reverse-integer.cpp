class Solution {
public:
    int reverse(int x) {
        long long Reverse=0;
        while(x!=0){
           int digit=x%10;
            Reverse=Reverse*10+digit;
            x=x/10;
        }
        if(Reverse>2147483647 || Reverse<-2147483648){
            return 0;
        }
        return Reverse;
    

    }
};