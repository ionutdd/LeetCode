//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/
//20 minutes

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int i = 1;
        int maxi = -1;
        int price = prices[0];
        if (prices.size() == 1)
            return 0;
        while (prices[i] < price)
        {
            price = prices[i];
            i++;
            if (i == prices.size())
                break;
        }
        if (i == prices.size())
            return 0;
        for (int j = i; j < prices.size(); j++)
            {
                if (prices[j] < price)
                    price = prices[j];
                else if ((prices[j] - price) > maxi)
                    maxi = prices[j] - price;
            }
        if (maxi == -1)
            return 0;
        return maxi;
    }
};
