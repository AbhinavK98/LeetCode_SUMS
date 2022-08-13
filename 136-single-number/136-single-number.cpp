
     //Approach 1: Xoring with itself will give that number only and xoring two same number will be zero. TC=0(n).
// class Solution {
// public:
//
//     int singleNumber(vector<int>& nums) {
//         int ans=0;
//         for(int i=0;i<nums.size();i++)
//         {
//             ans=ans^nums[i];
//         }
//         return ans;
//     }
// };


 //Approach 2: Xoring with itself will give that number only and xoring two same number will be zero. TC=0(n).
class Solution {
public:
   
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        
        for(int i=1;i<nums.size();i+=2)
        {
            if(nums[i]!=nums[i-1])
                return nums[i-1];
        }
        return nums[nums.size()-1];
       
    }
};