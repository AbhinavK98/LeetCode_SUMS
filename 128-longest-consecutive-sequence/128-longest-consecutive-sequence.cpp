class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //Approach 1://Bruteforce time will be 0(nlogn)
        //here we are sorting 
        if(nums.size()==0)
        {
            return 0;
        }
       sort(nums.begin(),nums.end());
        int maxi=1;
        int count=1;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])
                continue;
            if(nums[i]==nums[i+1]-1){       
                count++;
            }
            else{
                  maxi=max(count,maxi);
                count=1;
            }
           
        }
         maxi=max(count,maxi);
        return maxi;
        
    }
};