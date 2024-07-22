class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = prices[0];
        int mxProfit = 0;
        for (int i=0; i<prices.size(); i++)
        {
            mxProfit = max(prices[i] - minPrice, mxProfit);
            minPrice = min(minPrice, prices[i]);
        }
        return mxProfit;
    }
};