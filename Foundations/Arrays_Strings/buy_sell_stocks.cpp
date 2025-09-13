class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {

        //=================O(n^2)============================
        //     int profit = 0;
        //     for(int i=0; i<prices.size(); i++){
        //         for(int j=i+1; j<prices.size(); j++){
        //             if(profit < prices[j] - prices[i]){
        //                 profit = prices[j] - prices[i];
        //             }
        //         }
        //     }
        //     return profit;
        //=======================================================

        int min = prices[0], maxProfit = 0;
        for (int i = 1; i < prices.size(); i++)
        {
            if (min > prices[i])
                min = prices[i];
            if (maxProfit < prices[i] - min)
                maxProfit = prices[i] - min;
        }
        return maxProfit;
    }
};