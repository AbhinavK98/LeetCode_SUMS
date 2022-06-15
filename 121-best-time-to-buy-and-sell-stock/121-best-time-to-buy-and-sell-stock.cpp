class Solution {
public:
    int maxProfit(vector<int>& prices) {
        // int profit=0;
        // int maxi= INT_MIN;
        // for(int i=0;i<prices.size();i++){
        //     profit=0;
        //     for(int j=i+1;j<prices.size();j++){
        //         profit=prices[j]-prices[i];
        //         maxi=max(profit,maxi);
        //     }
        // }
        // if(maxi<=0)
        //     return 0;
        // else
        // return maxi;
        
            int profit=0;
            int mini=INT_MAX;
            int maxi=INT_MIN;
            for(int i=0;i<prices.size();i++){
            mini=min(mini,prices[i]);
            profit=prices[i]-mini;
                maxi=max(profit,maxi);
}
        if(maxi<=0)
            return 0;
        else
        return maxi;
        
    }
};