class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int mini=prices[0];
        int maxprofit=0;
        int cost;
        int n=prices.size();
        for(int i=0;i<n;i++)
        {
            cost=prices[i]-mini;
            maxprofit=max(cost,maxprofit);
            mini=min(prices[i],mini);
        }
        return maxprofit;
    }
};