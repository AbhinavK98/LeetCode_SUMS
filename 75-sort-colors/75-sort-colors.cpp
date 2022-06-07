class Solution {
public:
    void sortColors(vector<int>& nums) {
         int low= 0;
        int mid= 0;
        int high =nums.size()-1;
        
        while(mid<=high){
            
            //when mid is 0
            if(nums[mid]==0){
                swap(nums[mid],nums[low]);
                mid++;
                low++;
            }
            else if(nums[mid]==1)//when mid is 1
            {
                mid++;
            }
            else //when mid is 2
            {
                swap(nums[mid],nums[high]);
                mid;
                high--;
            }
        }
    }
};