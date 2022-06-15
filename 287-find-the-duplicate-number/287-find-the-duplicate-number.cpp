class Solution {
public:
    //Approach 1:
//     int findDuplicate(vector<int>& nums) {
//         for(int i=0;i<nums.size();i++){
//             for(int j=i+1;j<nums.size();j++){
                
//                 if(nums[i]==nums[j]){
//                     return nums[i];
//                 }            
//             }
//         }
//         return -1;
    
    //Approach 2:
    int findDuplicate(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            if(nums[i]==nums[i+1])
            {
                return nums[i];
            }
        }
        return -1;
    }
};