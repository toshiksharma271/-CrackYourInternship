class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int buy = INT_MAX;
        int sell = 0;
        int profit = 0;
        for(int i=0;i<n;i++){
            buy = min(buy,prices[i]);
            sell = max(sell,prices[i]-buy);
            if(sell>0){
                profit+=sell;
                buy=prices[i];
                sell=0;
            }
        }
        return profit;
        
    }
};
