class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        //Approach 1://Bruteforce time will be 0(nlogn)
        //here we are sorting and taking care of all edge cases
        
        if(nums.size()==0)//when array is empty
        {
            return 0;
        }
       sort(nums.begin(),nums.end());
        int maxi=INT_MIN;
        int count=1;//if array has element it has atleast 1 sequence
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==nums[i+1])//if two elements are same continue
                continue;
            if(nums[i]==nums[i+1]-1){ //check if two element are consecutive      
                count++;//increase count
            }
            else{
                  maxi=max(count,maxi);//else retuen the max and keep the count 
                count=1;
            }
           
        }
         maxi=max(count,maxi);
        return maxi;
        
    }
};