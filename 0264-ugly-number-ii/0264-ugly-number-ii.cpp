class Solution {
public:
    int nthUglyNumber(int n) {
        int arr[n];
        int two=0;
        int three=0;
        int five=0;
        arr[0]=1;// first ugly number
        for(int i=1;i<n;i++){
            arr[i]=min(arr[two]*2,min(arr[three]*3,arr[five]*5));
            if(arr[i]==arr[two]*2)
                two++;
            if(arr[i]==arr[three]*3)
                three++;
            if(arr[i]==arr[five]*5)
                five++;
            
        }
        return arr[n-1];
        
    }
};