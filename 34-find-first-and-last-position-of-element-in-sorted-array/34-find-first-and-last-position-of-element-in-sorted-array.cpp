int FirstOccur(vector<int>& nums,int target){
    int start=0;
    int end=nums.size()-1;
    int mid=start + (end-start)/2;
    //THIS IS SAME AS START+END/2 BUT THIS WILL HELP US FROM FALLING OUTSIDE INT RANGE
    int ans=-1;
    while(start<=end)
    {
        if(nums[mid]==target)
        {
           ans=mid;
           end=mid-1;
        }

        //if value of key is greater than mid then to go right

       else if(target>nums[mid])
        {
            start=mid+1;
        }
        else if(target<nums[mid]){
            end=mid-1;
        }
        mid=start + (end-start)/2;
    }
    return ans;
}
int LastOccur(vector<int>& nums, int target){
    int start=0;
    int end=nums.size()-1;
    int mid=start + (end-start)/2;
    //THIS IS SAME AS START+END/2 BUT THIS WILL HELP US FROM FALLING OUTSIDE INT RANGE
    int ans=-1;
    while(start<=end)
    {
        if(nums[mid]==target)
        {
           ans=mid;
            start=mid+1;
        }

        //if value of key is greater than mid then to go right

       else if(target>nums[mid])
        {
            start=mid+1;
        }
        else if(target<nums[mid]){
            end=mid-1;
        }
        mid=start + (end-start)/2;
    }
    return ans;
}

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    
        vector<int> res({FirstOccur(nums, target), LastOccur(nums, target)});
        
        return res;
    }
};