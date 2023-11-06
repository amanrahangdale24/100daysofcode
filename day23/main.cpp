class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mp = prices[0];
        int high = 0;

        for(int i=1;i<prices.size();i++){
            high = max(high,prices[i]-mp);
            mp = min(prices[i],mp);
        }

        return high;
    }
};
