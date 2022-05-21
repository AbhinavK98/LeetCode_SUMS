class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> temp(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            temp[(i+k) % nums.size()]=nums[i];
                // rotating value and storing it in temp array because if we would have used nums array then value will get overriden
                
        }
        nums=temp;//copying nums in temp array
    }
};