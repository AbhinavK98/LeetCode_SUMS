class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        //Approach 1: T>C=O(n*n)
        
//        int n=nums.size();
  
//         for(int i=0;i<nums.size();i++)            
//         {
//                   int count =0;
//             for(int j=i+1;j<nums.size();j++)
//             {
//                 if(nums[i]==nums[j])
//                     count++;
//             }
//             if(count>=n/2)
//             {
//                 return nums[i];
//             }
//         }
        
//        return 0; 
        
        int n=nums.size();
            sort(nums.begin(),nums.end());
            int count=0;
            int i=0;
           if(n==1) return nums[i];
            for(;i<nums.size();i++)
            {
                if(nums[i]==nums[i+1])
                { 
                    count++;
                if(count>=n/2)
                    return nums[i];
                }
                else
                    count=0;
            }            
        return 0;
    }
};