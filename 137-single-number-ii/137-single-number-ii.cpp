//Approach 1: Sort the array , check if nums[i]==nums[i+1] increase i=i+3,else return nums[i].

class Solution {
public:
    int singleNumber(vector<int>& nums) {
         sort(nums.begin(),nums.end());
        
        for(int i=0;i<nums.size();)
        {
           if(i+1<nums.size() && nums[i]==nums[i+1] )
           {
             i=i+3;   
           }
            else{
                return nums[i];
            }
        }
        return 0;
        
    }
};