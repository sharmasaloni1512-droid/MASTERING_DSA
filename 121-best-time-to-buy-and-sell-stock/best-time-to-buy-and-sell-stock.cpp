class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int max_profit = 0;
        int min_price = prices[0];

        for(int i = 1; i < n; i++){
            min_price = min(min_price, prices[i]);
            int diff = prices[i] - min_price;
            max_profit = max(max_profit, diff);
        }
        return max_profit;
    }
};