class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
         
        //Approach 1: It takes O(n*3) TLE as we are using 3 loops
        
        
//          int maxi=INT_MIN;
//         for (int i = 0; i < nums.size(); i++)
//         {
//     for (int j = i; j < nums.size(); j++) {
//         int sum = 0;
//         for (int k = i; k <= j; k++){
//             sum += nums[k];
//         }
//         maxi=max(sum,maxi);
//     }
//         }
//         return maxi;
        

        
        //Approach 2: It takes O(n*2) TLE as we are using 3 loops

        
        
//         int maxi=INT_MIN;
//         for(int i=0;i<nums.size();i++)
//         {
//             int sum=0;
//             for(int j=i;j<nums.size();j++)
//             {
//                 sum+=nums[j];
//             maxi=max(maxi,sum);
//             }
//         }
//         return maxi;     
        
        
        
        //Approach 3:Kadane's Algorithim it takes O(n) time
        
        int maxi=INT_MIN;
        int sum=0;
        for(int i=0;i<nums.size();i++){
        sum+=nums[i];
            maxi=max(sum,maxi);
            if(sum<0)
                sum=0;
            
        }
        return maxi;
        
        
    }
};