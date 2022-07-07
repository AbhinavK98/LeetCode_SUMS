class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        //Approach 1: TC=O(n*n SC=O(1)
        
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
        
        //Approach 2: TC-O(nlog(n)+n), SC=O(1) Better than previous approach but not linear`
        
//         int n=nums.size();
//             sort(nums.begin(),nums.end());
//             int count=0;
//             int i=0;
//            if(n==1) return nums[i];
//             for(;i<nums.size();i++)
//             {
//                 if(nums[i]==nums[i+1])
//                 { 
//                     count++;
//                 if(count>=n/2)
//                     return nums[i];
//                 }
//                 else
//                     count=0;
//             }  
        
        
//         return 0;
        
        
         // APPROACH 3: T.C =O(N), OPTIMAL APPROACH [MOST VOTING ALGORITHIM]
        
            int n=nums.size();
            int count=0;
            int el;
        for(int i=0;i<nums.size();i++)
        {
            if(count==0){
                el=nums[i];
            }
            if(el==nums[i]){
                count++;
            }
            else{
                count-=1;
            }
                
        }
         return el;
    }
};