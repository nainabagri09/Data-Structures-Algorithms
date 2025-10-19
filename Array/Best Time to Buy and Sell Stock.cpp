class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int cheapest = prices[0]; 
        int maxProfit = 0;
        for(int i = 1; i<prices.size(); i++){
            int curr_ele = prices[i];    
            int curr_profit = 0;
            if(curr_ele<cheapest){    
                cheapest = curr_ele;  
            }
            curr_profit = curr_ele-cheapest;   
            maxProfit = max(maxProfit,curr_profit); 
        }
        return maxProfit; 
    }
};
