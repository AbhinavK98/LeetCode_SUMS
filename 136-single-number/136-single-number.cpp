class Solution {
public:
    //Approach 1: Xoring with itself will give that number only and xoring two same number will be zero. TC=0(n).
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            ans=ans^nums[i];
        }
        return ans;
    }
};