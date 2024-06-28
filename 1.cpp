class Solution {
public:
    int maxProfit(vector<int>& prices) {
        prices.push_back(0);
        int mini=INT_MAX;
        int maxi=INT_MIN;
        int profit = 0;
        for(int i=0;i<prices.size();i++){
            if(prices[i]<maxi){
                profit += maxi - mini;
                mini = INT_MAX;
                maxi=INT_MIN;
            }
            mini = min(mini,prices[i]);
            maxi = max(maxi,prices[i]);
        }
        return profit;
    }
};

//TC=O(N)
//SC=O(1)
