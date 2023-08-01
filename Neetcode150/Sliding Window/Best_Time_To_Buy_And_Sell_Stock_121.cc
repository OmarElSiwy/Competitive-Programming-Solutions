class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minbuy = int(1e6);
        int maxprofit = int(-1e6);
        for (int i = 0 ; i < prices.size(); i++) {
            maxprofit = max(maxprofit, prices[i]-minbuy);
            minbuy = min(minbuy, prices[i]);
        }
        return maxprofit < 0 ? 0 : maxprofit;
    }
};