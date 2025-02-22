class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxProfit=0;
        int buy_price=prices[0];
        for(int i=1;i<prices.size();i++){
           int currentProfit = prices[i]-buy_price;
            if(currentProfit>maxProfit){
                maxProfit=currentProfit;
            }
            if(prices[i]<buy_price){
                buy_price=prices[i];

            }

        }
        return maxProfit;
        
    }
};