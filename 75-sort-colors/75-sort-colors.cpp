class Solution {
public:
    
    //THREE POINTER APPROACH
    void sortColors(vector<int>& nums) {
//          int low = 0,//iNTIALIZING LOW AS O MID AS 0 AND HIGH AS LAST INDEX
//           mid = 0, 
//         high = nums.size()-1;
//                while(mid<=high)
//        {
//               // IF THE ELEMENT IS 0 
                   
//            if(nums[mid]==0)
            
//                 swap(nums[mid++],nums[low++]);
                   
//               // IF THE ELEMENT IS 1 . 
                   
//           else if(nums[mid]==1)
            
//                  mid++;
                   
//                // IF THE ELEMENT IS 2 
//            else
//              swap(nums[mid],nums[high--]);
//                     }
        
        sort(nums.begin(),nums.end());
    }
};