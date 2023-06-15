//Kadane allgorithms

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int profit=0;
        int minimum=prices[0];
        for(int i=1;i<n;i++)
        {
            minimum=min(minimum,prices[i]);
            profit=max(profit,(prices[i]-minimum));
        }
        return profit;
        
    }
};
