//Problem link: https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

//Time complexity: O(n)
//Space complexity: O(1)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        //assign maximum prices value to this variable
        int minPrice = INT_MAX;
        int maxProfit = 0;
        //traverse the array of prices
        for(int i=0; i < prices.size(); i++)
        {
            //Comparing minimal and prices array to find minimum
            minPrice = min(minPrice, prices[i]);
            //Comparing maximum profit and the difference between prices & minimum price
            maxProfit = max(maxProfit, prices[i] - minPrice);
        }
        return maxProfit;
    }
};
