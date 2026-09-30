class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int min_so_far=INT_MAX;
        int max_profit=0;
        for(int i=0;i<n;i++){
            if(prices[i]<min_so_far){
                min_so_far=prices[i];
            }else{
                max_profit=max(max_profit,prices[i]-min_so_far);
            }
        }
        return max_profit;
    }
};
